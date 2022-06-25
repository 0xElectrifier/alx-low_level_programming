#include "main.h"

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of points to strings passed on command line
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int product;

	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);

}
