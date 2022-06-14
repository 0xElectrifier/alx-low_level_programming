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
	int i, len;
	char *s1;

	s1 = s;
	i = 0;

	while (s1[i] != '\0')
		i++;
	i--;
	len = i;

	for(j = 0; j <= len; j++)
	{
		s[j] = s1[i];
		i--;
	}
}
