#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file name to be appended
 * @text_content: string to append to the file
 *
 * Return: 1 if success or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writing, count = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		return (1);
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
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
