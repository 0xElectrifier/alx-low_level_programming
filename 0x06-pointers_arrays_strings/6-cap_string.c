#include "main.h"

/**
 * is_lowercase - Checks for Lowercase
 * @n: Array to loop through
 * @i: incremental loop value
 *
 * Return: 0 if false and anyother value if true
 */
int is_lowercase(char *n, int j)
{
	return(n[j] >= 'A' && n[j] <= 'Z');
}

/**
 * symbol - Loops through s array to match symbol
 * @n: Array to loop through
 * @i: incremental loop value
 * Return: 0 if false and anyother value if true
 */
int is_symbol(char *n, int i)
{
	int k;

	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', 
	'\t', '\n'};

	for (k = 0; s[k] != '\0'; k++)
	{
		if (n[i] == s[k])
			return (1);
		else
			return (0);
	}
}
/**
 * cap_string - Capitalizes all words of a string
 * @n: String to be capitalized
 *
 * Return: n
 */
char *cap_string(char *n)
{
	int i;
	char j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = -128; j <= 127; j++)
		{
			if (is_symbol(n, i) && is_lowercase(n, j))
			{
				n[i] = j - 32;
			}
		}

	}

	return (n);
}
