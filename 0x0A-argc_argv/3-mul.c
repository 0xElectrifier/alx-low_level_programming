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
	long int product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atol(argv[1]) * atol(argv[2]);
	printf("%ld\n", product);

	return (0);

}
