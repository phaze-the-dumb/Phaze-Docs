# Config Utils

Config utils alows you to store data on the quests memory

## Installing Config Utils

Just run
- `qpm dependency add config-utils`
- `qpm restore`

## Setting Up Config Utils

Create a file called `ModConfig.hpp` in the `include` folder and make this the contents:

```cpp
#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(VarName, std::string, "VarName", "Var Value");

    CONFIG_INIT_FUNCTION(
        CONFIG_INIT_VALUE(VarName);
    )
)
```

And in `main.cpp` add this line to the includes
```cpp
#include "ModConfig.hpp"
```

And then this below the namespaces
```cpp
...

using namespace GlobalNamespace;

static ModInfo modInfo;
DEFINE_CONFIG(ModConfig); // <-----

...
```

Then add this to the load function
```cpp
extern "C" void load() {
    il2cpp_functions::Init();
    getModConfig().Init(modInfo); // <------

    LoggerContextObject logger = getLogger().WithContext("load");

    getLogger().info("Installing hooks...");
    // Hooks
    getLogger().info("Installed all hooks!");
}
```
