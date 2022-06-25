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
	int *num, d, *change, c;
	d = 0; 
	change = &d;
	c = atoi(argv[1]);
	num = &c;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	if (*num < 0)
	{
		printf("0\n");

		return (0);
	}

	*change = *num / 25;
	*num = *num % 25;

	*change = *num / 10;
	*num = *num % 10;

	*change = *num / 5;
	*num = *num % 5;

	*change = *num / 2;
	*num = *num % 2;

	*change = *num / 1;
	*num = *num % 1;

	printf("%d\n", *change);

	return (0);
}
/**
int change_cent(int num, int subt, int change)
{
	for (; num - subt < subt; change++)
		num -= sub;
	return (--change);
}*/
