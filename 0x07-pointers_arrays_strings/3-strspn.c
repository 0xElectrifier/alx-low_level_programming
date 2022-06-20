#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned for accept chars
 * @accept: required chars
 *
 * Return: string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;
	while (*(accept + k) != '\0')
		k++;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= k; j++)
		{
			if (*(s + i) == *(accept + j))
				break;
			if (j == k)
				return (i);
		}
	}

	return ('\0');
}
