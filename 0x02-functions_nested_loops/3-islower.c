#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase char
 * @c: The integer to be checked
 * Description: Loops through and checks for lowercase characters
 * Return: 1 if c is lowercase, else returns 0.
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
