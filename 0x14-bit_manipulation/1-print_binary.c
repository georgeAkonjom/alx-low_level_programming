#include "main.h"

/**
 * print_binary - prints the binary equivalent of a given decimal.
 * @n: an int.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int i, check = 0;
	unsigned long int buffer;

	for (i = 63; i >= 0; i--)
	{
		buffer = n >> i;

		if (buffer & 1)
		{
			_putchar('1');
			check = 1;
		}
		else if (check)
			_putchar('0');
	}
}
