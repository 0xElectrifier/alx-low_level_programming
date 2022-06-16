#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 = s2, negative figure if s1 < s2 &
 * 		positive figure if s1 > s2
 */
char *_strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 < s2)
		return (-1);
	else
		return (1);
}
