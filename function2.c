#include "shell.h"

/**
 * _strcmp - Compare the two of string
 * @s1: first string
 * @s2: second string
 * Return: 0 if string s1 equal to s2
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int) (*s1) - (*s2));
}


/**
 * _strcpy - copying string
 * @dest: destination
 * @src: source
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = 0;
	return (dest);
}


/**
 * _strdup - duplicating the string
 * @str: the string
 * Return: pointer of string
 */

char *_strdup(const char *str)
{
	int len = 0;
	char *ch;

	if (str == NULL)
		return (NULL);
	while (*str++)
		len++;
	ch = malloc(sizeof(char) * (len + 1));
	if (!ch)
		return (NULL);
	for (len++; len--;)
		ch[len] = *--str;
	return (ch);
}


/**
 * _atoi - Converting the string to the integer
 * @str: The string
 * Return: The integer
 */

int _atoi(const char *str)
{
	int a, sign;
	unsigned int number;

	a = 0;
	sign = 1;
	number = 0;

	while (str[a] != '\0')
	{
		if (str[a] == '-')
			sign *= -1;
		else if (str[a] >= '0' && str[a] <= '9')
			number = (number * 10) + (str[a] - '0');
		else
			break;
		a++;
	}
	return (number * sign);
}

/**
 * _calloc - for allocateing memory
 * @nmemb: the size of array
 * @size: the size of element
 * Return: pointer for the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
