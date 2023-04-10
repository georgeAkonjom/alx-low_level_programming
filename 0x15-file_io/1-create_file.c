#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created.
 * @text_content: conted to be written into file.
 * Return: 1. -1 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	int fd, wrfail;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (1);/*returns 1, creates an empty file.*/
	}
	for (i = 0; text_content[i]; i++)
		;

	wrfail = write(fd, text_content, i);

	if (wrfail == -1)
		return (-1);

	close(fd);
	return (1);
}
