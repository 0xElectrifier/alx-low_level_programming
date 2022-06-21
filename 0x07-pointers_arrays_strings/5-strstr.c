#include "main.h"

/**
 * is_equal - checks if parameter 1 & 2 are equal
 * @h: first parameter
 * @n: second parameter
 * @i: index for h from loop
 * @j: index for n from loop
 *
 * Return: 0 if false, otherwise any number
 */
int is_equal(char *h, char *n, unsigned int i, unsigned int j)
{
	return ((h[i] == n[j]) && (h[i] != '\0' && n[j] != '\0'));
}


/**
 * _strstr - function that locates a substring
 * @haystack: points to the string to be searched
 * @needle: points to substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, i1, j1, len_needle;

	len_needle = 0;
	while (needle[len_needle] != '\0')
		len_needle++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				i1 = i;
				j1 = j;

				while (j1 <= len_needle)
				{
					if (is_equal(haystack, needle, i1, j1))
					{
						j1++;
						i1++;
						continue;
					}
					if (needle[j1] == '\0')
						return (haystack + i);
					if (haystack[i1] != needle[j1])
						break;
				}
			}
			else
				break;
		}
	}
	return ('\0');
}
