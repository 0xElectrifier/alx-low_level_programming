#include "main.h"

/**
 * more_numbers - Prints 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 11; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
