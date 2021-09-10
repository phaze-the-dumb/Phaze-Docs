# Quest UI

Quest UI is a library designed to make, constructing Beatsaber UIs easier

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

