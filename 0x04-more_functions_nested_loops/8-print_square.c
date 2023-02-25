#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_square(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = 0; rows < size; ++rows)
		{
			for (cols = 0; cols < size; ++cols)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
