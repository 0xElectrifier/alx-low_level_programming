#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function to check for uppercase
 * @c: Take integer c as Parameter
 * Description: Uses isupper() to check
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
