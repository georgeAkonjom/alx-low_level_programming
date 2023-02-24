#include "main.h"

/**
 * print_line - check the code
 * @n: input value
 * Return: Always 0.
 */
void print_line(int n)
{
	int lines;
	int spaces;

	if (n > 0)
	{
		for (lines = 0; lines <= n; lines++)
		{
			_putchar(92);
			_putchar('\n')
			for (spaces = 1; spaces <= lines; spaces++)
				_putchar(' ');
		}
	}
	else 
		_putchar('\n');
}
