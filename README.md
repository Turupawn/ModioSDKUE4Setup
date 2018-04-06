# ModioSDKUE4Setup
Minimal SDK setup example for UE4

![](pics/demo.png)

# Step 1: Load the mod.io SDK

1. Download the mod.io SDK
2. Create a [ThirdParty/ Directory](ThirdParty/)
3. Place the headers and .lib files on the corresponding Libraries and Headers directories
4. Edit your [Build.cs](Source/ModioSetupExample/ModioSetupExample.Build.cs) file to load the library

# Step 2: Initialize the mod.io instance

1. Import and create a mod.io instance variable on your [Game Module Header](Source/ModioSetupExample/ModioSetupExample.h#L8)
2. Initialize and shutdown the mod.io instance on your [Game Module Source](Source/ModioSetupExample/ModioSetupExample.cpp)

# Step 3: Use mod.io from your blueprints

1. Define all the methods in your [Modio Blueprint Library](Source/ModioSetupExample/ModioBlueprintFunctionLibrary.h)
2. Implement them on your [Modio Blueprint Source](Source/ModioSetupExample/ModioBlueprintFunctionLibrary.cpp)
3. You can now use the methods from your blueprints.

![](pics/get_mods.png)

![](pics/tick.png)
