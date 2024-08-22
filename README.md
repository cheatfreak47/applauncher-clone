# applauncher-clone
Made for the BetterSADX project.

Steam SADX runs in an odd way since the update that added achievements.

The game now launches with one of two possible commands.
-bootgame or -bootlauncher

This is a simple program that accepts these commands and does what I want when they are passed.
In this case.

-bootgame runs "sonic.exe" inside the same folder it is located in.
-bootlauncher runs "SAModManager.exe" OR "SADXModManager.exe" inside the same folder it is located in.

It also seems to "just work" for passing steam's hook to the programs it runs, I don't recall having to do anything special to get it to work.

Should work fine, releases are in the release section.

Building on windows is intended to be done via MSYS2 with mingw-w64-i686-gcc. Obviously you will need MSYS2 on your PATH variable to run make and build.