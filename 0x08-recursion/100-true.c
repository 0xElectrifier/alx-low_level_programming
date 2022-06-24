#include "main.h"

int is_palindrome(char *s)
{
	int f, l;

	f = 0;
	l = _strlen(s) - 1;
	return (is_palindrome_check(s, f, l));
}

int is_palindrome_check(char *s, int f, int l)
{
	if (f > l)
		return (1);
	if (s[f] == s[l])
		return (1 * is_palindrome_check(s, ++f, --l));
	else
		return (0 * is_palindrome_check(s, ++f, --l));
}
/**
 * _strlen - Function that returns the length of a string
 * @s: Takes pointer s of type char as parameter
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

