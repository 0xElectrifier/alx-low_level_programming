#include "main.h"

/**
 * print_err - function that prints to stderr
 * @file: index/file descriptor of file that caused error
 * @flag: contains the exit status of the err
 * @sw: string of chars
 * @av:pointer to array of pointers to the commands passed on the terminal
 *
 * Return: 0
 */
int print_err(int file, int flag, char *sw, char **av)
{
	(void) av;

	if (flag == CLOSE)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s fd %d\n", sw, file);
		exit(flag);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't %s file %s\n", sw, av[file]);
		exit(flag);
	}

	return (0);
}

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
	int file_from, file_to, file_t, buf_size, c_f1, c_f2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		print_err(1, READ, READ_T, av);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
		print_err(2, WRITE, WRITE_T, av);
	buf_size = 1024;
	while (buf_size == 1024)
	{
		buf_size = read(file_from, buf, 1024);
		if (buf_size == -1)
			print_err(1, READ, READ_T, av);
		file_t = write(file_to, buf, buf_size);
		if (file_t == -1)
			print_err(2, WRITE, WRITE_T, av);
	}

	c_f1 = close(file_to);
	if (c_f1 == -1)
	{
		print_err(file_to, CLOSE, CLOSE_T, av);
		exit(100);
	}
	c_f2 = close(file_from);
	if (c_f2 == -1)
	{
		print_err(file_from, CLOSE, CLOSE_T, av);
		exit(100);
	}

	return (0);
}
