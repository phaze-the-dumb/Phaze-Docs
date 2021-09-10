# Custom Types

Custom types is a library that lets you create types that use C# types so you can interact with the game in certain ways.

### How to make a basic custom type

To make a basic codegen class with custom types we can do the following in a header file.

```cpp
DECLARE_CLASS_CODEGEN(MyNamespace, MyClassName, UnityEngine::MonoBehaviour,
    DECLARE_INSTANCE_METHOD(void, Update);
)

```

Now we need to define the class we made in a source file.

```cpp
DEFINE_TYPE(MyNamespace, MyClassName);
```

With our class defined we can now use the update method we declared in a source file.

```cpp

void MyNamespace::MyClasName::Update() {
    //This code runs every frame
}
```
Finally we need to register our custom types in the load method by adding one line.

`custom_types::Register::AutoRegister();`

This is what our load method should look like now
```cpp
extern "C" void load() {
    il2cpp_functions::Init();

    getLogger().info("Installing hooks...");
    // Install our hooks (none defined yet)
    getLogger().info("Installed all hooks!");

    custom_types::Register::AutoRegister(); // Add this
}
```