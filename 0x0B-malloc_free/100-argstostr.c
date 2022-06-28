#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: length of array
 * @av: array of arguments to be concatenated
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(ac * sizeof(int));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i += 2)
	{
		if (j % 2 == 0)
			str[i] = av[i];

		if (j % 2)
		{
			str[j] = '\n';
			j += 2;
		}
	}
	return (str);
}
