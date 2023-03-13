#include "main.h"
/**
 * create_array - returns a pointer ro a char array
 * @size: holds the size of the a array
 * @c: the char to stick in our array
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned iint i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
