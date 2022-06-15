#include "main.h"

/**
 * _strcpy - print array
 * @dest: character pointer
 * @src: character source
 * Description: copies _strcpy pointed to by src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		continue;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
