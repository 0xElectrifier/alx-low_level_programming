#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer pointer parameter
 * @b: Second integer pointer parameter
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *a;
}
