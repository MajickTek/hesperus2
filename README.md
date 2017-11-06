# hesperus2
A fully-working 3D map editor (in Java) and level compilation toolchain (in C++), and a part-finished 3D game engine (in C++). Early development was done in the hesperus project and ported to CMake to form hesperus2.

# Our Stuff
Some of these tools are compatible with Quake 1/VALVE's GoldSrc Engine.

These tools are:

hcsg

hbsp

hvis

Here is a list of all the tools in this toolkit:

hbsp - Compiles BSP

hcollate - combines files from these tools together

hcsg - Calculates Brushes

hdetail - (insert more info later)

hdivide - (insert more info later)

hexpand - (insert more info later)

hflood - (insert more info later)

hlight - Calculates lighting

hnav - calculates navigatable space (insert more info later)

hobsp - Compile onion BSP

hoportal - Compiles onion portals

hportal - Compiles portals

hvis - Visibility calculation (insert more info later)

mef2input - Compiles Shipwreck MEF (Map Editor Format) files into files that the above tools can process and build.

The map format has the extension .mef; with exceptions (.max, .map).

It comes with a map editor (Shipwreck; java), and a game engine (ScarletPimpernel; c++).

Everything is fully documented, including all the things that need to be fixed/added.

## TODO

Make the build process easier; make Shipwreck's build.sh work properly.

Shipwreck is actually updated in the update-shipwreck branch; although the engine is completely different in terms of libs etc.

Update dependencies.

Make CMake compilation up-to-date.

Push new updates to main repo as a pull request?

Add better Quake1/GoldSrc support (instructions for Hammer are in notes/hesperus - hammer.txt)

Add self-updating system in java to update Shipwreck (the editor) and download new versions of the tools (?).
The resource for that could be http://www.dreamincode.net/forums/topic/190944-creating-an-updater-in-java/ .

See more TODO stuff (engine- and tool-related) in notes/hesperus - todo.txt
