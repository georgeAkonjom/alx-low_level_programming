#include "main.h"

/**
 * get_bit - grabs the bit at the given index
 * @n: no idea.
 * @index: 0 - 63;
 * Return: 1 or 0, -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int buffer, val;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		;
	buffer = (n >> i);
	val = buffer & 1;

	return (val);
}
