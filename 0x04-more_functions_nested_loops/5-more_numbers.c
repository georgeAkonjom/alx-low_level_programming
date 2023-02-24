#include "main.h"

/**
 * more_numbers - identifys alphabetical chars
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int c;
	int count;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; ++c)
		{
			count = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				count = c % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
