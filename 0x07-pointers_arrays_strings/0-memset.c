#include "main.h"

/**
 * _memset - Function that fills a memory with constant byte
 * @s: pointer whose pointed value to be filled
 * @b: constant byte
 * @n: first n elements
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
