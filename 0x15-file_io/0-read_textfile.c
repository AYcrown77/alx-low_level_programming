#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;

	buffer = malloc(sizeof(char *) * letters);
	if (!buffer)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}

	count = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, count);

	free(buffer);
	close(fd);

	return (count);
}
