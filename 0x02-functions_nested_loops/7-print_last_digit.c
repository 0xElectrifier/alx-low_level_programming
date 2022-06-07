#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: Passes integer n
 * Description: Print last digit of n
 * Return: computed last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
		n = n;
	else
		n = -n;

	int lastDigit = n % 10;

	if (lastDigit > 9)
	{
		lastDigit = lastDigit % 10;

		while (lastDigit > 9)
			lastDigit = lastDigit % 10;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
