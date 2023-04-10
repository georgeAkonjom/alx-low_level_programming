#include "main.h"

/**
 * append_text_to_file - add text to the end of a file, If file doesnt exist create it,
 * @filename: name of file to append text to.
 * @text_content: content to append to the end of our newly created file. 
 * Return: 1. -1 if fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0644);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (0);/**if no text content return the created file.*/
	for (i = 0; text_content[i]; i++)
		;

	wrfail = write(fd, text_content, i);
	if (wrfail == -1)
		return (-1);

	close(fd);
	return (1);
}
