#include "main.h"
/**
 * read_textfile - reads from filename and prints to stdout.
 * @filename: the name of the file.
 * @letters: no of chars to be printed.
 * Return: no of bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int write_ret;
	ssize_t ret;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(BUFFSIZE);

	ret = read(fd, buff, letters);

	if (ret == -1)
		return (0);

	write_ret = write(2, buff, letters);
	if (write_ret == -1)
		return (0);
	
	if ((unsigned int)write_ret != letters)
		return (0);
	return (ret);
}
