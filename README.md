# hesperus2
A fully-working 3D map editor (in Java) and level compilation toolchain (in C++), and a part-finished 3D game engine (in C++). Early development was done in the hesperus project and ported to CMake to form hesperus2.

# Our Stuff
Some of these tools are compatible with Quake 1/VALVE's GoldSrc Engine.

These tools are:

hcsg

hbsp

hvis

Here is a list of all the tools in this toolkit:

hbsp

hcollate

hcsg

hdetail

hdivide

hexpand

hflood

hlight

hnav

hobsp

hoportal

hportal

hvis

mef2input

The map format has the extension .mef; with exceptions (.max, .map).

It comes with a map editor (Shipwreck; java), and a game engine (ScarletPimpernel; c++)

## TODO

Make the build process easier; make Shipwreck's build.sh work properly.

Shipwreck is actually updated in the update-shipwreck branch; although the engine is completely different in terms of libs etc.

Update dependencies.

Make CMake compilation up-to-date.

Push new updates to main repo as a pull request?

Add better Quake1/GoldSrc support (instructions for Hammer are in notes/hesperus - hammer.txt)

Add self-updating system in java to update Shipwreck (the editor) and download new versions of the tools (?).

See more TODO stuff (engine- and tool-related) in notes/hesperus - todo.txt
