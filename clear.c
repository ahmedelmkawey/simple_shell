#include "shell.h"

/**
 * shell_clear - clearng terminal view
 * @args: arguments
 * Return: 1 for  execut
 */

int shell_clear(char **args)
{
	(void)args;

	_puts("\033[2J\033[H");

	return (1);
}
