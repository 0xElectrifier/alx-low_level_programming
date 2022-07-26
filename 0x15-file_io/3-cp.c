#include "main.h"

/**
 * main - duplicate of the linux 'cp' command that copies contents of a file
 * into another file
 * @ac: number of arguements passed on the terminal
 * @av: pointer to array of pointers to the commands passed on the terminal
 *
 * Return: 0 always
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		fprintf((FILE) STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	return (1);
}
