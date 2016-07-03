# applauncher-clone
Made for the BetterSADX project.

Steam SADX runs in an odd way since the update that added achievments.

The game now launches with one of two possible commands.
-bootgame or -bootlauncher

This is a simple program that accepts these commands and does what I want when they are passed.
In this case.

-bootgame runs "sonic.exe" inside the same folder it is located in.
-bootlauncher runs "SADXModManager.exe" inside the same folder it is located in.

It also seems to "just work" for passing steam's hook to the programs it runs, I don't recall having to do anything special to get it to work.
Thanks to Spoonm for help with this.

Designed to be built with GCC (ala [MinGW](https://sourceforge.net/projects/mingw/files/) requiring mingw32-base) 
It is complied with flags -mwindows and -m32, to make it run invisibly and have the executable be a 32-bit Windows Application.

I have included a batch file that builds for you with the command. This means you'll need GCC in your environment variable.
"gcc applauncher.c -mwindows -m32 -o AppLauncher.exe"

Should work fine, releases are in the release section.
