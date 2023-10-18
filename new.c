#include "shell.h"


/**
 * _strchr - to locateing char in the string
 * @s: pointer
 * @c: character
 * Return: first part of the char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

/**
 * _strstr - checks if needle starts with haystack
 * @haystack: string
 * @needle: substring for finding
 * Return: address of next char
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			int b;

			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] != needle[b])
				{
					break;
				}
			}

			if (needle[b] == '\0')
			{
				return (&haystack[a]);
			}
		}
	}
	return (NULL);
}


/**
 *_putchar - writeing the character c to stdout
 * @c: character to print
 * Return: success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcat - concatenatesing the two strings
 * @dest: the destination
 * @src: the source
 * Return: pointer for the destination buffer
 */

char *_strcat(char *dest, const char *src)
{
	char *ch = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ch);
}


/**
 * _memcpy - for coping memory area
 * @dest: destinatin
 * @src: source
 * @n: n number of bytes of @src
 * Return: Always 0 
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}

