#include "main.h"

/**
 * leet - Encodes string into 1337
 * @s: string to be encoded
 *
 * Return: s
 */
char *leet(char *s)
{
	int i, j;
	char *lower, *upper, *numb;

	lower = "aeotl";
	upper = "AEOTL";
	numb = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = numb[j];
			}
			j++;
		}
	}
	return (s);
}
