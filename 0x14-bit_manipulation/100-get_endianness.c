#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 *
 * Return: 0 if bit endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 0x12345678;
	c = (char *)&i;

	if (*c == 0x12)
		return (0);

	return (1);
}
