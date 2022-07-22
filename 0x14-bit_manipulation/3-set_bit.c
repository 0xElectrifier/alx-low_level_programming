#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to integer whose bit will be set
 * @index: index of bit to set
 *
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	ULInt nt, i, bi;

	nt = 0;
	i = 0;
	bi = 1;

	if (index > 63)
		return (-1);

	while (i < 64)
	{
		if (i == index)
			nt += (1 * bi);
		nt += ((*n & 1) * bi);

		*n >>= 1;
		bi <<= 1;
		i++;
	}
	*n = nt;

	return (1);
}
