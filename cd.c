#include "shell.h"

/**
 * shell_cd - change pwd to past directory
 * @args: the arguments
 */

void shell_cd(char **args)
{
	char *directory = args[1];
	int ch;

	if (directory == NULL)
	{
		directory = _getenv("HOME");
		if (directory == NULL)
		{
			_puts("cd: No HOME directory found\n");
			return;
		}
	}

	ch = chdir(directory);
	if (ch == -1)
	{
		perror("cd");
	}
}
