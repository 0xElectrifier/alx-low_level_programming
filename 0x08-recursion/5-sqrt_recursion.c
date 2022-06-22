#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input ineger
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to compare the square of 'i' recursively
 * @n: perfect square
 * @i: number to be squared
 *
 * Return: square of i if i square is less tha n, i if i square is
 * 0 and -1 if i square is greater than n
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, ++i));
	else
		return (-1);
}
