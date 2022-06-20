#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: parameter to be edited
 * @src: get characters to be copied here
 * @n: first n characters
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
