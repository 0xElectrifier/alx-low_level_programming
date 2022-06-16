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
	int i, len_dest, len_src;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		continue;
	for (len_src = 0; src[len_src] != '\0'; len_src++)
		continue;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (; i < n; i++)
				dest[i] = '\0';
		}
		else
			dest[i] = src[i];
	}
	if (n <= len_dest)
	{
		for (; dest[i] != '\0'; i++)
		{
			dest[i] = dest[i];
		}
		dest[i] = '\0';
	}

	return (dest);
}
