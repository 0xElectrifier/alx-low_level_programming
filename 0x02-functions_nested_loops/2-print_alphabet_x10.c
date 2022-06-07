#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets
 * @void: No arguement passed
 *
 * Description: Print 10 times the letter of lowercase alphabet
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char lowercase = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
		i++;
		_putchar('\n');
	}
}
