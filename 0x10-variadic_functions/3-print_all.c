#include "variadic_functions.h"

/**
 * print_char - prints character to stdout
 * @arg: list of arguments to be printed
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints integer to stdout
 * @arg: list of arguments to be printed
 *
 * Return: nothing
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints float to stdout
 * @arg: list of arguments to be printed
 *
 * Return: nothing
 */
void print_float(va_list arg)
{
	double num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints string to stdout
 * @arg: list of arguments to be printed
 *
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - variadic function that prints any type of data type
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;
	printer func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);
	while (format && *(format + i))
	{
		j = 0;

		while (j < 4 && *(format + i) != func[j].symbol)
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
