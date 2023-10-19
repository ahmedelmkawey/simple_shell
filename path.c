#include "shell.h"

/**
 * get_path -  PATH of the enviromen
 * Return: Pointer of PATH
 */

char *get_path(void)
{
	return (_getenv("PATH"));
}
