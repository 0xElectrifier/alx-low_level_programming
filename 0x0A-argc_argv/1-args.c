#include "main.h"

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments passed at command line
 * @argv: array of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
