# THIS GUIDE IS OUT OF DATE!

**This guide was written around the 1.17 era of beatsaber modding, while many of the things I talk about in this guide may still work, a lot has changed**

**I am no longer maintaining this since I left the beatsaber modding scene ages ago, If you want to continue maintaining it dm me on discord `_phaz`**

# Getting Started

First of all we are going to need some software

Here is a list of applications you will need to help you make a beatsaber mod:

[Visual Studio Code](https://code.visualstudio.com/) or [Visual Studio](https://visualstudio.microsoft.com/) (I will be using visual studio code in this tutorial)

[Android NDK](https://developer.android.com/ndk/downloads)

[Andriod ADB](https://developer.android.com/studio/releases/platform-tools)

[Quest Package Manager](https://github.com/RedBrumbler/QuestPackageManager-Rust)

### Once we have that we need a template to start a project:

We are going to use: [LaurieTheFish's Template](https://github.com/Lauriethefish/quest-mod-template)

# Setting up the template
<a id="template"></a>

Download and extract the template into a new folder

Now open visual studio code

Click on `File > Open Folder` and then select the folder that you just downloaded

Once the folder has opened you are going to have to click on this little icon right here

![image](https://user-images.githubusercontent.com/57566773/132739318-647a99b5-bea6-4063-8d3f-94ed34feb510.png)

This should bring you to a menu of "plugins" or "extensions"

Search `Project Templates`

Install [this](https://marketplace.visualstudio.com/items?itemName=cantonios.project-templates) plugin

Once it is installed you may have to restart visual studio code

Right click and press `Project: Save Project as Template`

You are going to want to click on this option

It will then ask you for a template name put `Beatsaber Mod` here

# Setup
<a id="setup"></a>

Now create a new folder called somthing like `my-new-mod` make sure there aren't any spaces in the name of the folder or ndk will error when you try to build your mod

Now go back to visual studio code and click on `File > Open Folder` and then select the folder that you just created

Now you want to right click again and select `Create Project from Template` select this option and then click `Beatsaber Mod`

Now enter the information it asks

**Note: When it asks for `ndkpath` you need to give it the path of the folder where you downloaded Android NDK**

# Now you have a basic mod template!

[Next](./starting-coding)
