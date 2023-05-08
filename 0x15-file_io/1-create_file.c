#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file name to be created
 * @text_content: string to write to the file
 *
 * Return: 1 if success or -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writing, count = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
	{
		return (-1);
	}

	writing = write(fd, text_content, count);
	if (writing < 0)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
