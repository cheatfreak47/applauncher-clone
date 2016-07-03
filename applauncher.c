#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int
main(int argc, char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "Command ran without arguments...\n");
		exit(EXIT_FAILURE);
	}

	if (!strcmp(argv[1], "-bootgame"))
		execl("sonicdx.exe", "sonicdx.exe", NULL);
	else if (!strcmp(argv[1], "-bootlauncher"))
		execl("SADXModManager.exe", "SADXModManager.exe", NULL);
	else
	{
		fprintf(stderr, "Unknown option: \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
