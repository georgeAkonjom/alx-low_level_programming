#include "main.h"

/**
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_ret;

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write_ret = write(fd, text_content, BUFFSIZE);
	if (write_ret == -1)
		return (-1);

	return (write_ret);
}
