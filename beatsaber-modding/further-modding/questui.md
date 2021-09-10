# Quest UI

Quest UI is a library designed to make constructing Beatsaber UIs easier

---

## Installing QuestUI
<a id="installing"></a>

You should be able to run
- `qpm dependency add questui`
- `qpm restore`

## Creating a settings menu
<a id="settings-menu"></a>

We need to include questui so just add this line to your includes
```cpp
#include "questui/shared/QuestUI.hpp"
```
And this to out namespaces
```cpp
using namespace QuestUI;
```

We need to update our load loop to have these two new lines in it

```cpp
...

extern "C" void load() {
    il2cpp_functions::Init();

    LoggerContextObject logger = getLogger().WithContext("load");
    
    QuestUI::Init();                                                                    // <-----
    QuestUI::Register::RegisterModSettingsViewController(modInfo, DidActivate);         // <----- This Adds a button in the settings menu
    QuestUI::Register::RegisterMainMenuModSettingsViewController(modInfo, DidActivate); // <----- This Adds a button in the main menu
    getLogger().info("Successfully installed Settings UI!");                            // <-----

    getLogger().info("Installing hooks...");
    INSTALL_HOOK(logger, NoteController_Init);
    getLogger().info("Installed all hooks!");
}

...
```

Now we need to create our `didactivate` function 

```cpp
...

void DidActivate(HMUI::ViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling){
    if(firstActivation){
        // If first time activated
    } else{
        // If not first time activated
    }
}

...
```

If its the first time its activated we want to create a settings container

```cpp
...

if(firstActivation){
    UnityEngine::GameObject* container = BeatSaberUI::CreateScrollableSettingsContainer(self->get_transform());
} else{

}

...
```

But in here we can see that it has a `UnityEngine::GameObject*` class we need to include this class

Add this line to your includes
```cpp
#include "UnityEngine/GameObject.hpp"
```
Now we have a container we can add ui elements to it

You can find a list of elements [here](./questui-reference#elements)

We are going to use a button element here

```cpp
...

UnityEngine::GameObject* container = BeatSaberUI::CreateScrollableSettingsContainer(self->get_transform());

BeatSaberUI::CreateUIButton(container->get_transform(), "Click Me!",
   [&]() {
       getLogger().info("Button Clicked");
   });

...
```

Now whenever you press the button it will log to the console

Find out more about logging [here](../building#logging)
