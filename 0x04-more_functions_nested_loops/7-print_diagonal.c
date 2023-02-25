#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int col, space;

	if (n > 0)
	{
		for (col = 0; col < n; ++col)
		{
			if (col >= 1)
			{
				for (space = 0; space < col; ++space)
				{
					_putchar(' ');
				}
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
