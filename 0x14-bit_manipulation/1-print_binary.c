#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer to be converted to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int k, first_digit;
	int i;

	i = 31;
	first_digit = 0;
	if (n == 0)
		_putchar('0');

	while (i >= 0)
	{
		k = n >> i;
		if (k & 1)
			first_digit++;

		if (first_digit)
		{
			(k & 1) ? _putchar('1') : _putchar('0');
		}
		i--;
	}
}
