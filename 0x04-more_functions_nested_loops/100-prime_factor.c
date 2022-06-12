#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, n;

	n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (n == 1)
			{
				printf("%ld\n", i);
				break;
			}
		}
	}
	return (0);
}
