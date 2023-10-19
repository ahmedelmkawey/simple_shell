#include "shell.h"

/**
 * shell_unsetenv - unset for the environment variable
 * @args: Arguments
 * Return: succes
 */

int shell_unsetenv(char **args)
{
	char *ch;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	ch = args[1];

	if (unsetenv(ch) != 0)
	{
		_puterror("unsetenv");
	}
	return (0);
}


/**
 * shell_setenv -  value of environment
 * @args: Argument
 * Return: succes
 */

int shell_setenv(char **args)
{
	char *ch, *val;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	ch = args[1];
	val = args[2];

	if (setenv(name, value, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}
	return (0);
}
