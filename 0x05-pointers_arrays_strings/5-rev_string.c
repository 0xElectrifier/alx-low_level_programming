#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Takes s as parameter
 *
 * Description: Reverses a string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, len;
	char s1;

	i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	len = i;

	for (j = 0; j <= (i / 2); j++)
	{
		s1 = s[j];
		s[j] = s[len];
		s[len--] = s1;
	}
}
