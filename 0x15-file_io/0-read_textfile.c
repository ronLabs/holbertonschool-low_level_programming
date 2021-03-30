#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the std output.
 * @filename: name of the file want to read
 * @letters: number of caracters of the file
 * Return: number of character of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if ( fd == -1)
	{
		return (0);
	}
	buf = (char *) malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	size = read(fd, buf, letters);/*function read() returns the number of bytes read*/
	if (size == -1)
		return (0);

	buf[size] = '\0';
	wr = write(STDOUT_FILENO, buf, size);/*return the number of bytes written*/
	/*ssize_t write(int fd, const void *buf, size_t count)*/
	if (wr == -1)/*return error*/
		return (0);
	close(fd);
	return (size);
}
