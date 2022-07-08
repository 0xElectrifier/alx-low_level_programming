#include "variadic_function.h"

/**
 * va_arg_mod - function that checks if va_arg return is NULL
 * @arg_pointer: argument pointer
 * @type
 *
 * Return: string or nil if string is NULL
 */
int *va_arg_mod(va_link arg_pointer)
{
	char p;

	p = arg_pointer(arg_pointer, char);
	if (p == NULL)
		return ("nil");

	return (p);
}
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_link arg_pointer;

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_pointer, char);
		if (str = NULL)
		printf("s", "nil");
		else
			printf("s", str);
		if ( i != (n - 1) && separator != NULL)
			printf("s", separator);
	}
	printf("\n");
}
