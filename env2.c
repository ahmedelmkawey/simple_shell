#include "shell.h"

/**
 * shell_env - printing environment variables
 * Return: nothing succes
 */

int shell_env(void)
{
	int b;

	for (b = 0; environ[b]; b++)
	{
		_puts(environ[b]);
		_putchar('\n');
	}

	return (0);
}
