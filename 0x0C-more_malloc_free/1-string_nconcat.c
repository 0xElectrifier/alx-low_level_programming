#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: newly allocated space in memory which contains s1 + n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, n2, len_of_str, i, j = 0;
	char *str;

	n2 = n;
	if (s1 == NULL)
		len_s1 = 0;
	for (len_s1 = 0; (s1 != NULL) && (s1[len_s1] != '\0'); len_s1++)
		continue;

	if (s2 == NULL)
		len_s2 = 0;
	for (len_s2 = 0; (s2 != NULL) && (s2[len_s2] != '\0'); len_s2++)
		continue;

	if (n >= len_s2)
		n2 = len_s2;

	len_of_str = len_s1 + n2 + 1;

	str = malloc((len_of_str) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];

	for (; i < len_of_str; i++, j++)
		str[i] = s2[j];

	return (str);
}
