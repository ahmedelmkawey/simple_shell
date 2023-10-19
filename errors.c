#include "shell.h"

/**
 * _puterror - printing the error
 * @err: error messages
 * Return: nothing
 */

void _puterror(char *err)
{
	size_t lengh;
	ssize_t num;

	lengh = _strlen(err);
	num = write(STDERR_FILENO, err, lengh);
	if (num == -1)
	{
		perror("write");
	}
}


/**
 * _puts - printing string
 * @str: string
 * Return: succes
 */

void _puts(char *str)
{
	size_t lengh;
	ssize_t num;

	lengh = _strlen(str);
	num = write(STDOUT_FILENO, str, lengh);
	if (num == -1)
	{
		perror("write");
	}
}
