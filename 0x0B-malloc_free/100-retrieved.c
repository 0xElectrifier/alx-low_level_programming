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
@@ -9,25 +28,27 @@
 */
char *argstostr(int ac, char **av)
{
	int i;
	int i, j, *k = 0, len_array;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(ac * sizeof(int));

	len_array = len_arr(ac, av);

	str = malloc((len_array + ac) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i += 2)
	for (i = 0; *av[i] != '\0'; i++)
	{
		if (j % 2 == 0)
			str[i] = av[i];

		if (j % 2)
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[j] = '\n';
			j += 2;
			str[*k] = av[i][j];
			k += 1;
		}
		str[*k] = '\n';
		k += 1;
	}
	return (str);
}
