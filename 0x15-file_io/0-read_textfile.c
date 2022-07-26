#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: path to file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 if file
 * cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	int read_ret, write_ret;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_ret = read(fd, buf, letters);
	if (read_ret == -1)
		return (0);

	write_ret = write(STDOUT_FILENO, buf, read_ret);
	if (write_ret == -1)
		return (0);

	free(buf);
	close(fd);

	return (write_ret);
}
