#include "main.h"
/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b * sizeof(unsigned int));
	if (n == NULL)
		return (98);
	return (n);
}
