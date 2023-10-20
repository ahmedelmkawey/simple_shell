#include "shell.h"

static char *last_input;


/**
 * get_input - Read input from user
 * Return: Pointer to the buffer
*/

char *get_input(void)
{
	char *in = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {
		if (isatty(STDIN_FILENO))
			prompt();
		nread = getline(&in, &input_size, stdin);
		if (nread == -1)
		{
			free(in);
			return (NULL);
		}

		in[nread - 1] = '\0';

	} while (in[0] == '\0' || isspace(in[0]));

	last_input = in;
	return (in);
}



/**
 * free_last_input - Frees input from user.
 */

void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}
