# Finishing the mod

So our final goal was to make all maps 360 degrees.

To do this we need to make a variable lets call it `spinVar` to set the `worldRotation` property of the notes with

We know `worldRotation` is a float so to create a float variable we need the line

```cpp
float spinVar = 0.0f
```

This will create the variable we need

Now we should change the line

```cpp
worldRotation = 90.0f
```
to
```cpp
worldRotation = spinVar
```

Now we just need to add one to this variable everytime a note spawns!

Inside the `NoteController_Init` hook you need to put this code

```cpp
spinVar = spinVar + 1.0f
```

All this does is add `1.0f` onto the variable 

**Tip: `1.0f` basically means `1` here but the variable we are setting it to is a float so we need to keep the same value types**

Now you can [build](../building) the mod

---

## Further Modding

Find pages about further modding [here](./home)
