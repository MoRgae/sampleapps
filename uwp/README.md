# Open Translators to Things Sample App - UWP

Sample apps built with Universal Windows Platform (UWP) for Lamp, Shades and Temperature sensors.

Apps uses schema interfaces and features Cortana integration for voice commands.

This README will help get you started running the sample apps.

## Install Tools

Get your dev environment set up (PC):
* [Install Windows 10](http://www.dev.windows.com)
* [Install Visual Studio](http://www.visualstudio.com) and include UWP option during the installation

## Get the Source

Next, clone this repo to your local machine to get started. Navigate to the directory with the app you want to explore and launch the visual studio solution file

##Get started

Check our [website] (http://www.opentranslatorstothings.org) for a more complete guide how to start running Open Translator to Things.

To learn more about how to develop UWP using AllJoyn, check this [blog post] (https://channel9.msdn.com/Blogs/Internet-of-Things-Blog/Using-the-AllJoyn--Studio-Extension)


###Lamp

This sample connects to the org.OpenT2T.Sample.SuperPopular.Lamp schema. This sample interfaces with Lamp devices.

User can use switch button to turn the lamp On/off and the slider to set Brightness. user can use Cortana to set light On/Off


###Shades

This sample connects to the org.OpenT2T.Sample.SuperPopular.Shade

This sample interacts with shades which can be opened or closed either through UI or by Cortana voice commands

###Temperature

This sample connects to the org.OpenT2T.Sample.SuperPopular.TemperatureSensor
User can get the temperature with clicking Refresh in UI or interacting with Cortana

The Cortana component can be developed further by adding disambiguation code in case
there are multiple sensors


## Create a Pull Request
Made any changes we should consider? Send us a pull request! Check out [this article](https://help.github.com/articles/creating-a-pull-request/)
on how to get started.

