#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer whose bit at index will be found
 * @index: specified index starting from 0 of the bit you want to get
 *
 * Return: value of the required bit at @index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 63)
		return (-1);

	while (i < index)
	{
		n >>= 1;
		i++;
	}

	return (n & 1);
}
