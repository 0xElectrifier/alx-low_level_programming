#ifndef MAIN_H
#define MAIN_H

#define BIT (sizeof(unsigned long int) * 8);

#include <stdio.h>

int _strlen(const char *s);

int is_not_bit(const char *b);

int _pow(int x, int y);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int _putchar(char c);


#endif
