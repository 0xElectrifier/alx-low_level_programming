#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: str to be referenced
 *
 * Return: pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
		i++;

	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];


	return (s);
}
