#include "shell.h"

/**
 * get_path -  PATH of the enviroment 
 * Return: Pointer of PATH
 */

char *get_path(void)
{
	return (_getenv("PATH"));
}
