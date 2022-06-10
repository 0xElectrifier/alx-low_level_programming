#include "main.h"

/**
 * print_line - Draws straight line
 *@n: Takes n as Parameter
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
