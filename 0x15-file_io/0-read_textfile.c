#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: pointer to the file to read
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read and print or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *space;
	int fd, reading, writing;

	if (!filename)
	{
		return (0);
	}

	space = malloc(sizeof(char) * letters);
	if (!space)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	reading = read(fd, space, letters);
	if (reading < 0)
	{
		return (0);
	}

	writing = write(STDOUT_FILENO, space, reading);
	if (writing < 0)
	{
		return (0);
	}
	close(fd);
	free(space);
	return (reading);
}
