#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer to be converted to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	ULInt first_digit, one, bit, nt;
	int i;

	i = 63;
	first_digit = 0;
	one = 1;
	bit = one << 63;
	nt = n;

	if (nt >> 0)
	{
		while (i >= 0)
		{
			if (n & bit)
				first_digit++;

			if (first_digit)
			{
				(n & bit) ? _putchar('1') : _putchar('0');
			}
			i--;
			n <<= 1;
		}
	}
	else
		_putchar('0');
}
