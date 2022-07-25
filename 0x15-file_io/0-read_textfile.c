#include "main.h"


/**
 * _strlen - Function that returns the length of a string
 * @s: Takes pointer s of type char as parameter
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
	int fd, ret, buf_len;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	buf[letters] = '\0';

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);

	ret = write(STDOUT_FILENO, buf, letters);
	if (ret == -1)
		return (0);
	buf_len = _strlen(buf);
	if (buf_len < ret)
		return (buf_len);

	close(fd);

	return (ret);
}
