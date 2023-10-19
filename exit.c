#include "shell.h"

/**
 * shell_exit - Exit shell
 * @args: Arguments
 * Return: Nothing success
 */

void shell_exit(char **args)
{
	int statuss = 0;

	if (args[1] != NULL)
	{
		statuss = _atoi(args[1]);
	}

	free_tokens(args);
	free_last_input();
	exit(statuss);
}
