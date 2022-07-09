#ifndef _VARIADIC_FUNCTION
#define _VARIADIC_FUNCTION

#include <stdio.h>
#include <stdarg.h>

int _putchar(char n);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print_arr - struct that contains a char and pointer function
 * @s: data type specifier
 * @print_func: pointer function that prints a specific data type input
 *
 */
typedef struct
{
	char symbol;
	void (*print)(va_list arg);
} printer;

void print_all(const char *const format, ...);

void print_char(va_list arg);

void print_int(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

#endif
