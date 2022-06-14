#include "main.h"

/**
 * puts2 - print character
 * @str: input string
 *
 * Description: prints character of a string, starting with the first character
 */

void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}
_putchar ('\n');
}
