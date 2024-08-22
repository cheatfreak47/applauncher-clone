#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

int
main(int argc, char **argv)
{
    struct stat buffer;

    if (argc < 2)
    {
        fprintf(stderr, "Command ran without arguments...\n");
        exit(EXIT_FAILURE);
    }

    if (!strcmp(argv[1], "-bootgame"))
        execl("sonic.exe", "sonic.exe", NULL);
    else if (!strcmp(argv[1], "-bootlauncher"))
    {
        if (stat("SAModManager.exe", &buffer) == 0)
            execl("SAModManager.exe", "SAModManager.exe", NULL);
        else
            execl("SADXModManager.exe", "SADXModManager.exe", NULL);
    }
    else
    {
        fprintf(stderr, "Unknown option: \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
