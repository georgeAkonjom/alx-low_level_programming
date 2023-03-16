#include "main.h"
/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
