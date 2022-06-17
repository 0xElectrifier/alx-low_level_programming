#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of string to uppercase
 * @n: First parameter
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;
	char j;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (n[i] == j)
				n[i] = j + 32;
		}
	}
	return (n);
}
