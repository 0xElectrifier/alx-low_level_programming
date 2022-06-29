#include "main.h"

/**
 * len_arr - loops through argv array and checks length of all characters
 * @argc: number of rows/arguments passed in
 * @argv: array to be looped
 *
 * Return: len_arg
 */
int len_arr(int argc, char **argv)
{
	int i, j, len;

	for (len = i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			len += 1;
		}
		len += 1;
	}
	return (len);
}
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: length of array
 * @av: array of arguments passed at terminal
 *
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len_array;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len_array = len_arr(ac, av);

	str = malloc((len_array + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k += 1;
		}
		str[k] = '\n';
		k += 1;
	}
	str[k] = '\0';
	return (str);
}
