#include "shell.h"

/**
 * main - run simple shell
 * Return: exit
 */


int main(void)
{
	char *in;
	char **args;
	int status;

	signal(SIGINT, handle_sigint);
	signal(SIGQUIT, handle_sigquit);
	signal(SIGTSTP, handle_sigstp);

	do {
		in = get_input();
		if (!in || !*in)
			break;

		args = tokenize_input(in);
		if (!args || !*args)
		{
			free(in);
			free_tokens(args);
			continue;
		}
		status = execute(args);
		free(in);
		free_tokens(args);
		status = 1;
	} while (status);

	return (EXIT_SUCCESS);
}
