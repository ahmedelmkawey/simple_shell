#include "shell.h"

/**
 * prompt - handling prompt on
 * Return: nothing
 */

void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
