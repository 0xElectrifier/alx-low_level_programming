#include "main.h"

/**
 * _puts - Prints a string, followed by a new line
 * @str: Takes string character array str as Parameter
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	for (i = 0; i != '\0'; i ++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
