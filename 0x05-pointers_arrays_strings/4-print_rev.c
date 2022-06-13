#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: Takes s as parameter
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	while (i <= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
