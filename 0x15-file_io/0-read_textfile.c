#include "main.h"

/**
 * read_textfile - reads the text in a file and prints it to stdout.
 * @filename: name of the file to be read.
 * @letters: no of letters.
 * Return: wrfail. Still dont know why.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rdfail, wrfail;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)/*open returns -1;*/
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rdfail = read(fd, buffer, letters);
	if (rdfail == -1)
		return (0);
	wrfail = write(STDOUT_FILENO, buffer, rdfail);
	if (wrfail == -1)
		return (0);
	close(fd);
	free(buffer);

	return (wrfail); /*not buffer? not letters? why?*/
}
