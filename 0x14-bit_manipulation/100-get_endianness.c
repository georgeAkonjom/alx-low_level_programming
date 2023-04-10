#include "main.h"

/**
 * get_endianness - big endian or little endian? rascism?
 * Return: 0 if big. 1 if little.
 */

int get_endianness(void)
{
	unsigned int num;
	char *c = (char *)&num;

	if (*c != 0) /*big endians have first byte equal to zero*/
		return (1);
	else
		return (0);
}
