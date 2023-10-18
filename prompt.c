#include "shell.h"

/**
 * prompt_check - handling prompt on
 * Return: nothing
 */

void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
