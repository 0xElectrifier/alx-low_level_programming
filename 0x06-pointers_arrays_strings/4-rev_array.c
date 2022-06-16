#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, m;
	int tmp;

	m = n - 1;
	for (i = 0; i <= ((n - 1) / 2); i++)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;

		m++;
	}
}
