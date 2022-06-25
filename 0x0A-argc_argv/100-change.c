#include <stdio.h>
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
	int cent, change;

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	change_cent(&cent, 25, &change);
	change_cent(&cent, 10, &change);
	change_cent(&cent, 5, &change);
	change_cent(&cent, 2, &change);
	change_cent(&cent, 1, &change);

	printf("%d\n", change);

	return (0);
}

/**
 * change_cent - function that counts how much change a value gives you
 * @num: pointer to input cent value
 * @subt: the integer subtrahend
 * @change: the nubmer of times subt successfully subtracts num
 *
 * Return: alwalys 0;
 */
int change_cent(int *num, int subt, int *change)
{
	int *s_num;

	s_num = num;
	while (*s_num >= subt)
	{
		*s_num -= subt;
		++*change;
	}
	return (0);
}
