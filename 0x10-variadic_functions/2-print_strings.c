#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg_pointer;

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_pointer, char*);

		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg_pointer);
	printf("\n");
}
