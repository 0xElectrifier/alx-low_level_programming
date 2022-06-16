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
	int i, m, len_a;
	int s;

	for (len_a = 0; a[len_a != '\0']; len_a++)
		continue;

	m = n;
	m--;
	for (i = 0; i <= ((n - 1) / 2); i++)
	{
		s = a[m];
		a[m] = a[i];
		a[i] = s;

		m--;
	}


	if (a[n] != '\0')
	{
		for (; i != '\0'; i++)
			a[i] = a[i];
	}
}
