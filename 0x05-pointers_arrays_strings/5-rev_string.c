#include "main.h"

/**
 * rev-string - Reverses a string
 * @s: Takes s as parameter
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
