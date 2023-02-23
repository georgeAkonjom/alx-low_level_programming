#include "main.h"

/**
 * print_numbers - identifys alphabetical chars
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			c++;
		_putchar(c + 48);
	}
	_putchar('\n');
}
