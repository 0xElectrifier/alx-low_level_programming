#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * number
 * @n: input integer
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n < 0)
		n = n * -1;
	i = n - 1;

	return (is_n_prime(n, i));
}

/**
 * is_n_prime - function to test if n is divisible by any other number
 * @n: input integer
 * @i: integer that checks if n % i is 0 or otherwise
 *
 * Return: 1 if n % i is 0, and 0 otherwise
 */
int is_n_prime(int n, int i)
{
	if (n == 1)
		return (0);
	if (i == 2)
		return (1);
	else if (i > 2)
	{
		if (n % i == 0)
			return (0 * is_n_prime(n, --i));
		else
			return (1 * is_n_prime(n, --i));
	}
	return (0);
}
