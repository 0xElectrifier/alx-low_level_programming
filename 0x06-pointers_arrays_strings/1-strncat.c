#include "main.h"

/**
 * _strncat - Concatenates first n char in string 2 to string 1
 * @dest: First string
 * @src: Second string
 * @n: First n char in string 2
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s;

	s = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		s[i] = dest[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i] = src[j];
		i++;
	}
	s[i] = '\0';
	dest = s;

	return (dest);
}
