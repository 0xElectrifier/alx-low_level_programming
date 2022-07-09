#ifndef _VARIADIC_FUNCTION
#define _VARIADIC_FUNCTION

#include <stdio.h>
#include <stdarg.h>

int _putchar(char n);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);


#endif
