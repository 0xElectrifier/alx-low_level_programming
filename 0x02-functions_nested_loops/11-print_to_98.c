#include "main.h"

/**
 * print_to_98 - Prints numbers
 * @n: Takes integer n as parameter
 * Description: Prints numbers
 * Return: integer
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
}
