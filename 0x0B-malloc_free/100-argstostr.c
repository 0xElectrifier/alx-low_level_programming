#include "main.h"

/**
 * len_arr - loops through argv array and checks length of all characters
 * @argv: array to be looped
 *
 * Return: len_arg
 */
int len_arr(int argc __attribute__((unused)), char **argv)
{
	int i, j, *len_arg = 0;

	for (i = 0; *argv[i] != '\0'; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			*len_arg = *len_arg + 1;
		}
	}
	return (*len_arg);
}
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: length of array
 * @av: array of arguments to be concatenated
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, *k = 0, len_array;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len_array = len_arr(ac, av);

	str = malloc((len_array + ac) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; *av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[*k] = av[i][j];
			k += 1;
		}
		str[*k] = '\n';
		k += 1;
	}
	return (str);
}
