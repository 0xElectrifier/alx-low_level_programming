#include "main.h"
/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: array of points to strings passed on command line
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv, i, 0))
			continue;
		else
		{
			printf("Error\n");

			return (1);
		}
	}

	for (k = 1; k < argc; k++)
		sum+= atoi(argv[k]);
	printf("%d\n", sum);

	return (0);

}

/**
 * is_digit - function to loop through an string,
 * to check for digits and otherwise
 * @argv: array of pointers to strings
 * @i: index of each string in argv
 * @j: index of each character in strings
 *
 * Return: 1 if no non-digit is found, otherwise 0
 */
int is_digit(char **argv, int i, int j)
{
	if (argv[i][j] == '\0')
		return (1);

	if (argv[i][j] >= 48 && argv[i][j] <= 57)
		return (1 * is_digit(argv, i, ++j));
	else
		return (0 * is_digit(argv, i, ++j));
}
