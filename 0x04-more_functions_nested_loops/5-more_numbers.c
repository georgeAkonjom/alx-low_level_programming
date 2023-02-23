#include "main.h"

/**
 * more_numbers - identifys alphabetical chars
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c < 15; c++)
			_putchar(c + 48);
		_putchar('\n');
	}
	_putchar('\n');
}
