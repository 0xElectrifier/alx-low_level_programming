#include "main.h"

/**
 * rev-string - Reverses a string
 * @s: Takes s as parameter
 *
 * Description: Reverses a string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		continue;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
