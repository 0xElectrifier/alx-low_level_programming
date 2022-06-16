#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 = s2, negative figure if s1 < s2 &
 *		positive figure if s1 > s2
 */
int *_strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		continue;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		continue;

	if (len_s1 == len_s2)
		return (0);
	else if (len_s1 < len_s2)
		return (-15);
	else
		return (15);
}
