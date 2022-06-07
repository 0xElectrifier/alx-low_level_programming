#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: Print lowercase letters with '_putchar' function.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
