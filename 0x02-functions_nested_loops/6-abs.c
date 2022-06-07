#include "main.h"
#include <stdlib.h>

/**
 * _abs - Computes absolute value of an integer
 * @n: Takes any integer, n as argument
 * Description: Computes absolute value of an integer
 * Return: Always 0.
 */
int _abs(int n)
{
	if (abs(n) >= 0)
		return (n);
	else
		return (-n);
}
