#include "main.h"

/**
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd == -1)
		return (-1);
	write_ret = write(filename, text_content, )
}
