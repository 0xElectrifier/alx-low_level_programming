#include "main.h"

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of arguments passed at command line
 * @argv: array of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void) **argv;
	printf("%d\n", argc);

	return (0);
}
