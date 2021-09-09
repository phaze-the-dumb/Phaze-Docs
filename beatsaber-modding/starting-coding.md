# Starting Coding

## Explaining code that already there
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
> Now you want to click environment variables and under `system variables` select path then click `new` and enter the path that you extracted qpm to

## Understanding The Hook System

In beatsaber modding we use a system called hooking to interact with the game
