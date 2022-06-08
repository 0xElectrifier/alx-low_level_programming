#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: Passes integer n
 * Description: Print last digit of n
 * Return: computed last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n = -n;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
