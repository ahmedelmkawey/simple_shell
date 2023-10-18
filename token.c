#include "shell.h"


/**
 * tokenize_input - spliting string
 * @input: inputing string
 * Return:  pointersto the for token
 */

char **tokenize_input(char *input)
{
	char **token = NULL;
	char *ch = NULL;

	ch = _strdup(input);
	if (ch == NULL)
	{
		_puts("Memory allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = tokenize(ch, " \t\r\n\a");
	free(ch);

	return (token);
}



/**
 * tokenize - parsing input for arguments
 * @str: the string
 * @delim: delimiter
 * Return: pointer for token
 */

char **tokenize(char *str, const char *delim)
{
	char *token = NULL;
	char **ch = NULL;
	int a = 0;

	token = strtok(str, delim);
	while (token)
	{
		ch = realloc(ch, sizeof(char *) * (a + 1));
		if (ch == NULL)
			return (NULL);

		ch[a] = malloc(_strlen(token) + 1);
		if (!(ch[a]))
			return (NULL);

		_strcpy(ch[a], token);
		token = strtok(NULL, delim);
		a++;
	}
	ch = realloc(ch, (a + 1) * sizeof(char *));
	if (!ch)
		return (NULL);

	ch[a] = NULL;
	return (ch);
}

