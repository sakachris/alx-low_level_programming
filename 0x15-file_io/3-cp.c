#include "main.h"

/**
 * main - entry point
 * @ac: count of arguments
 * @av: arguments passed
 *
 * Return: 0 if success
 */

int main(int ac, char **av)
{
	char *space;
	int fd_from, fd_to, reading, writing;

	space = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	while ((reading = read(fd_from, space, 1024)) > 0)
		writing = write(fd_to, space, reading);
	if (writing < 0 || reading < 0 || fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	free(space);
	return (0);
}
