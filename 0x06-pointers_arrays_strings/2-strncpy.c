#include "main.h"

/**
 * _strncpy - Function that copies n char from src into dest Parameters
 * @dest: First string
 * @src: Second string
 * @n: n numbers of characters in src
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *s;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
