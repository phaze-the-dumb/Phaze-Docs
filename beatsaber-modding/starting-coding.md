# Starting Coding

## Explaining code that is already there
<a id="explaining"></a>

```cpp
#include "main.hpp"
```
This line imports the data from `include/main.hpp`<br>

```cpp
Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}
```
This loads the configuration<br>

```cpp
Logger& getLogger() {
    static Logger* logger = new Logger(modInfo);
    return *logger;
}
```
This creates a "logger" which we can use to log data when we are debugging<br>

```cpp
extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;
    modInfo = info;
	
    getConfig().Load(); // Load the config file
    getLogger().info("Completed setup!");
}
```
This function runs while the game is loading (at the start)<br>

```cpp
extern "C" void load() {
    il2cpp_functions::Init();

    getLogger().info("Installing hooks...");
    // Install our hooks (none defined yet)
    getLogger().info("Installed all hooks!");
}
```
This is where we can install our hooks and UI functions (this function is called slightly later than the previous)<br>

## Using QPM
<a id="qpm"></a>

There are two ways of using qpm

1)
> This is easier but isn't always avalible
> 
> First of all you need to open the qpm [repo](https://github.com/sc2ad/QuestPackageManager/actions) on the actions tab you want to click on the action at the top (the latest) and scroll to the very bottom of that page if it has a file called "Win-insaller" you can download that and just run it if not you will have to use the second option

2)
> This is harder but the main way to install qpm
>
> First of all you need to open the qpm [repo](https://github.com/sc2ad/QuestPackageManager/actions) on the actions tab you want to click on the action at the top (the latest) and scroll to the very bottom of that page (this is only showing how to do this on windows (im not sure how to do this on linux or mac))
> Download the file called `QPM-win-x64` and extract the zip to a good location (somthing like `C:\Program Files\QPM`)
> Now open start and search `Advanced system settings` you will have to give it admin access to run
> Now you want to click environment variables and under `system variables` select path then click `new` and enter the path that you extracted qpm to.

Now you have QPM installed open up visual studio code and click `terminal > new terminal` you now want to run the command `qpm restore` this may take a while as there are alot of files qpm has to download.

## Understanding The Hook System

In beatsaber modding we use a system called hooking to interact with the game

This is where the code i showed before comes in
```cpp
extern "C" void load() {
    il2cpp_functions::Init();

    getLogger().info("Installing hooks...");
    // Install our hooks (none defined yet)
    getLogger().info("Installed all hooks!");
}
```

You want to add a line to this to get hooks running properly

```cpp
extern "C" void load() {
    il2cpp_functions::Init();

    LoggerContextObject logger = getLogger().WithContext("load");

    getLogger().info("Installing hooks...");
    // Install our hooks (none defined yet)
    getLogger().info("Installed all hooks!");
}
```
Now you can have a look in codegen for a hook

To do this you need to open up the file path `extern/codegen/include/GlobalNamespace` in here you can find a list of files that we can hook into (mostly)

For this example we are going to use the file `NoteController.hpp` to make any map into a 360 degree map as this hook runs whenever a note is spawned

We are going to start by adding three new lines


```cpp
#include "main.hpp"

#include "GlobalNamespace/NoteController.hpp" // <--------
#include "beatsaber-hook/shared/utils/hooking.hpp" // <--------

...
```
This imports the file that we were just talking about and also imports beatsaber hooks hooking system into our code so we can use it

```cpp
...

extern "C" void load() {
    il2cpp_functions::Init();

    LoggerContextObject logger = getLogger().WithContext("load");

    getLogger().info("Installing hooks...");
    INSTALL_HOOK(logger, NoteController_Init); // <-----
    getLogger().info("Installed all hooks!");
}

...
```
This line installs the hook currently if you try to build it you will get a build error...<br>
This is because we need to make a match / pair for the hook

Todo this we need to know all the arguments off the hook<br>
If we go back into the note controller file and look for the `Init()` hook we see this

```cpp
void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float endRotation, float uniformScale);
```

These are the variables.

**Note: if you are used to languages like python or javascript these `float`, `UnityEngine::Vector3` and `GlobalNamespace::NoteData*` may be knew to you, all these say is the type of the variable, if you have a type like `GlobalNamespace::NoteData*` you will need to include the file for this, If you need help with variables try [here](https://www.w3schools.com/cpp/cpp_variables.asp)**

The types we need for this are `GlobalNamespace::NoteData*` the reason this has a `*` after it is because it is a class.

To include this file we simply need to add the line
```cpp
#include "main.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"

#include "GlobalNamespace/NoteData.hpp" // <--------
...
```

Now we have all we need to make the hook match

After the "getLogger" loop add this code
```cpp
...

MAKE_HOOK_MATCH(NoteController_Init, &NoteController::Init, void, 
    NoteController* self,
    // We put args here
) {
    NoteController_Init(
    	self,
	// We put arg var names here
    )
};

...
```

So this code will turn out to be

```cpp
...

MAKE_HOOK_MATCH(NoteController_Init, &NoteController::Init, void, 
    NoteController* self,
    NoteData* noteData,
    float worldRotation,
    UnityEngine::Vector3 moveStartPos,
    UnityEngine::Vector3 moveEndPos,
    UnityEngine::Vector3 jumpEndPos,
    float moveDuration,
    float jumpDuration,
    float jumpGravity,
    float endRotation,
    float uniformScale
) {
    NoteController_Init(
    	self,
	noteData,
	worldRotation,
	moveStartPos,
	moveEndPos,
	jumpEndPos,
	moveDuration,
	jumpDuration,
	jumpGravity,
	endRotation,
	uniformScale
    ) // This is like a callback for a function
};

...
```

Now we have our hook set out we can continue,

Our original goal for this mod was to make it make every map a 360 degree map

We can use the "worldRotation" variable to change what angle the block comes at us.

Lets try setting it to `90`

---

By looking at the variable type we can tell that the "worldRotation" variable is a "float"
a float means that it will be a decimal number, but to stop the code think its a double we have to put a `f` on the end

so we need to add this line inside the hook but before the "callback" function

```cpp
worldRotation = 90.0f
```

This should set the rotation of the map to 90.

---

[Next](./building)
