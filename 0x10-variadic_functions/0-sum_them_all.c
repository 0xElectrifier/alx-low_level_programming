#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its parameters
 * @n: count of remaining arguments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_pointer;

	if (n == 0)
		return (0);

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_pointer);
	}
	va_end(arg_pointer);

	return (sum);
}
