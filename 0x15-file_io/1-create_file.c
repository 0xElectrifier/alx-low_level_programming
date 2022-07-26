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
	while ( s[i] && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_ret, buf_len;

	if (filename == NULL)
		return (-1);
	buf_len = _strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write_ret = write(fd, text_content, buf_len);
	if (write_ret == -1)
		return (-1);

	close(fd);
	return (1);
}
