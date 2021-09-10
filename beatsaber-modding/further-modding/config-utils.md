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
