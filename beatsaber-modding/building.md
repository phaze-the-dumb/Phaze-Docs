# Building a mod

There are two file types that you can build your mod into `.qmod` and `.so` files

The `.qmod` is what you use to release it and put in bmbf and `.so` is the file bmbf unpacks it to in the beatsaber mod folder

Once you have installed NDK and ADB connect your quest to your pc and make sure it is on

you can open the terminal in vsc (visual studio code) and run `./copy.ps1`

- This will copy the mod onto your quest

You can also run `./build.ps1` this will build the mod as a `.so` file

And you can run `./buildQMOD.ps1` this will build a `.qmod` file for you

# Logging

You can log data to your visual studio code terminal with the `./start-logging.ps1` command but you can also use `./copy.ps1 --log` to log as soon as its starts the game

[Next](./further-modding/finishing-the-mod)
