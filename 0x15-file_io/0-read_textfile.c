#include "main.h"
/**
 * read_textfile - reads from filename and prints to stdout.
 * @filename: the name of the file.
 * @letters: no of chars to be printed.
 * Return: no of bytes printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, fd, ret;
	char *buff;

	fd = open(filename, O_RDONLY);
	buff = malloc(BUFFSIZE);

	ret = read(fd, buff, letters);

	for (i = 0; buff[i] != '\0'; i++)
	{
		putchar(buff[i]);
	}
	return (ret);
}
