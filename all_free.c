#include "shell.h"


/**
 * free_path - free variable
 * Return: free
 */

void free_path(void)
{
	if (environ != NULL)
	{
		size_t i = 0;

		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], "PATH=", 5) == 0)
			{
				free(environ[i]);
				environ[i] = NULL;
				break;
			}
			i++;
		}
	}
}

/**
 * free_tokens - free memory with token
 * @ptr: pointer for memory
 * Return: sucess
 */

void free_tokens(char **ptr)
{
	int a;

	for (a = 0; ptr[a]; a++)
		free((ptr[a]));
	free(ptr);
}


/**
 * free_error - frees pointer for system error
 * @argv: the array of pointers
 * @arg: the pointer to an array of characters
 * Return: nothing
 */

void free_error(char **argv, char *arg)
{
	int x;

	for (x = 0; argv[x]; x++)
		free(argv[x]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}
