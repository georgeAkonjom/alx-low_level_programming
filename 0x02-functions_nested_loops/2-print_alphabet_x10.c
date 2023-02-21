#include "main.h"

/**
 * function print_alphabet_x10 - decriptin here.
 *
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		i++;
		_putchar('\n');
	}
}
