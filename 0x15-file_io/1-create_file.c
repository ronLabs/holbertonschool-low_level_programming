#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the text content as a string
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	i = 0;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
