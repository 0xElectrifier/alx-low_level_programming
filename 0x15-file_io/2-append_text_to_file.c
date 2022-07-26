#inlcude "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to be appended
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (text_len = 0; text_content[text_len] != '\0'; text_len++)
		continue;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write_ret = write(fd, text_content, text_len);
	if (write_ret == -1)
		return (-1);

	close(fd);

	return (1);
}
