#include "main.h"
/**
 * create_array - returns a pointer ro a char array
 * @size: holds the size of the a array
 * @c: the char to stick in our array
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (size == 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	a = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
