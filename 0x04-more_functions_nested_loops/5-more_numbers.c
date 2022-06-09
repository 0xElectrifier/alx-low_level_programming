#include "main.h"

/**
 * more_numbers - Prints 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
