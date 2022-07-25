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
	int fd, ret;
	char buf[letters];

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);

	ret = write(STDOUT_FILENO, buf, letters);
	if (ret == -1)
		return (0);

	close(fd);

	return (ret);
}
