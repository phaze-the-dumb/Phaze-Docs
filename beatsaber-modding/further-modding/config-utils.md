# Config Utils

Config utils allows you to store data on the quests memory

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

#### Supported Types
`float`, `std::string`, `int`, `double`, `char`, `bool`

for more help with variables go [here](https://www.w3schools.com/cpp/cpp_variables.asp)

---

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

## Getting and Setting values

To get a value you can just use
```cpp
getModConfig().VarName.GetValue();
```
and it will return the value off that variable

To set a value you can use
```cpp
getModConfig.VarName.SetValue("My New Value");
```
This will set that value to `My New Value` and it auto saves
