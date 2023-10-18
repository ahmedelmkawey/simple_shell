#include "shell.h"

/**
 * _strlen - returning length of string
 * @s: the string length check
 * Return: the length of string
 */
int _strlen(const char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;
	return (x);
}

/**
 * _strncmp - Compare the two string
 * @s1: First string
 * @s2: Second string
 * @n: Max number of character to compare
 * Return: 0  the strings lenght
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char ch1, ch2;

	while (n-- > 0)
	{
		ch1 = (unsigned char) *s1++;
		ch2 = (unsigned char) *s2++;

		if (ch1 != ch2)
			return (ch1 - ch2);
		if (ch1 == '\0')
			break;
	}

	return (0);
}


/**
 * _strspn - get the length of a substring
 * @s: pointer to the string
 * @accept: substring for look
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			return (a);
	}

	return (a);
}

/**
 **_memset - fill the memory with the constant byte
 *@s: the pointer
 *@b: the byte to be filled *s with it
 *@n: amount of bytes
 *Return: pointer for the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}


/**
 * _realloc - reallocateing the block of memory
 * @ptr: pointer
 * @old_size: old block
 * @new_size: new block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pp;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	pp = malloc(new_size);
	if (!pp)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		pp[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (pp);
}
