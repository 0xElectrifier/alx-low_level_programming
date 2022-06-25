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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
