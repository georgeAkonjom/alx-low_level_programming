#include "main.h"

/**
 * print_alphabet: decriptin here.
 *
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i > 10)
	{
		int x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			i++;
		}
	}
	_putchar('\n');
}
