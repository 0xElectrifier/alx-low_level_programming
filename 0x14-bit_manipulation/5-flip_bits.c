#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would want to flip
 * to get from one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: the number of flipped bits, sum
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, sum;

	i = 0;
	sum = 0;
	while (i < 64)
	{
		if ((n & 1) != (m & 1))
			sum++;
		i++;
		n >>= 1;
		m >>= 1;
	}
	return (sum);
}
