#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digits
 * @c: Takes integer c as parameter
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
