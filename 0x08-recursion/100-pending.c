#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0
 * if not
 * @s: string to check
 *
 * Return: integer, 1 if a string is a palindrome and 0 if not
 */
char *is_palindrome(char *s)
{
	char *r = s;

	rev_string(r, 0, strlen(r) - 1);
/**
	return (is_palindrome_check(s, r));*/
	return (r);
}

/**
 * is_palindrome_check - function to check for palindrome in details
 * @s_orig: original string
 * @s_rev: reversed string
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome_check(char *s_orig, char *s_rev)
{
	if (*s_orig == '\0')
		return (1);

	if (*s_orig == *s_rev)
		return (1 * is_palindrome_check(s_orig + 1, s_rev + 1));

	return (0 * is_palindrome_check(s_orig + 1, s_rev + 1));
}



/**
 * rev_string - function that prints a string in reverse
 * @s: pointer to string to be printed
 *
 * Return: nothing
 */
void rev_string(char *r, int i, int str_len)
{
        if (i < str_len)
	{
		swap(&r[i], &r[str_len]);
		rev_string(r, i + 1, str_len - 1);
	}
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

void swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
