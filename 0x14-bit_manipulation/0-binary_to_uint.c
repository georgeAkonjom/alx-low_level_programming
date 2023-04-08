#include "main.h"

/**
 * char_to_int - obvious, no?
 * @c: ascii char.
 * Return: an unsigned int, val.
 */

int char_to_int(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - changes a binary string to a decimal int.
 * @b: out binary char str.
 * Return: the unsigned int decimal val
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0, binary = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		binary = char_to_int(b[i]);

		if (binary != 1 && binary != 0)
			return (0);

		decimal = 2 * decimal + binary;
		/*printf("dec val is %u; binary val is %i\n", decimal, binary);*/
	}
	return (decimal);
}
