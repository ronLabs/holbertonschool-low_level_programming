#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text content as a string
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	i = 0;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	/* open() and creat() return the new file descriptor*/
	/* or -1 if an error occurred*/
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])/*the length of the content*/
		i++;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
