#include "main.h"

/**
 * flip_bits - how many bits need to change for one no to become the other.
 * @n: one no.
 * @m: the other.
 * Return: number of flips.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, flips = 0;
	unsigned long int current, buffer = n ^ m;

	while (i >= 0)
	{
		current = buffer >> i;
		if (current & 1)
			flips++;
		i--;
	}
	return (flips);
}
