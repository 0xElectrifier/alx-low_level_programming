#include "main.h"

/**
 * puts2 - print character
 * @str: input string
 *
 * Description: prints character of a string, starting with the first character
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
