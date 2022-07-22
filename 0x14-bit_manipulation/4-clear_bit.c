#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to integer to be set
 * @index: index of n to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	ULInt i, nt;

	i = 0;
	nt = 0;
	if (index > 63)
		return (-1);

	while (i < 64)
	{
		if (i == index)
			nt += (0 << i);
		else
			nt += ((*n & 1) << i);

		i++;
		*n >>= 1;
	}
	*n = nt;

	return (1);
}
