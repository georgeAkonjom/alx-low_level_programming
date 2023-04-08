#include "main.h"

/**
 * clear_bit - sets the bit at index to 1.
 * @n: pointer to an int value to overide.
 * @index: an int the index, from zero of the bit to overide.
 * Return: 1; -1 if fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);

	*n = (~(i << index) & *n);
	return (i);
}
