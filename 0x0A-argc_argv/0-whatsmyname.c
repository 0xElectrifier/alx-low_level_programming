#include "main.h"

/**
 * main - function that prints it name
 * @argc: number of command line arguements
 * @argv: array containing pointers to command line arguements
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

        for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);


	return (0);
}
