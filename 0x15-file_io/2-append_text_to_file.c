#include "main.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0644);
	if (fd == -1)
		return (-1);
	if 
}
