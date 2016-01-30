# applauncher-clone
Made for the BetterSADX project.

Steam SADX runs in an odd way since the update that added achievments.

The game now launcher with one of two possible commands.
-bootgame or -bootlauncher

This is a simple program that accepts these commands and does what I want when they are passed.
In this case.

-bootgame runs "sonic.exe" inside the same folder it is located in.
-bootlauncher runs "SADXModManager.exe" inside the same folder it is located in.

It also seems to "just work" for passing steam's hook to the programs it runs, I don't recall having to do anything special to get it to work.
Thanks to Spoonm/Skewer for help with this.

Designed to be built with GCC using flags -mwindows and -m32.
"gcc applauncher.c -mwindows -m32"

Should work fine, releases are in the release section.
