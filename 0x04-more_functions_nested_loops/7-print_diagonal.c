#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Takes integer n as Parameter
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
