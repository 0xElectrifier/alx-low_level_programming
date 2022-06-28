#include "main.h"

/**
 * str_concat - function that concatenates two string
 * @s1: first string
 * @s2: second string
 *
 * Return: the concatenateed string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, i, j;
	char *concat;

	len_s1 = 0;
	len_s2 = 0;
	i = 0;
	j = 0;
	while ((s1 != NULL) && (s1[len_s1] != '\0'))
	{
		len_s1++;
	}

	while ((s2 != NULL) && (s2[len_s2] != '\0'))
	{
		len_s2++;
	}

	concat = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (; i < len_s1; i++)
			concat[i] = s1[i];
	}
	if (s2 == NULL)
		concat[i] = '\0';
	else
	{
		for (; j <= len_s2; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}

	return (concat);
}
