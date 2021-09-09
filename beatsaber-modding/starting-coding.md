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
