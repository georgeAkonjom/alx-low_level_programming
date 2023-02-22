#include "main.h"

/**
 * _isalpha - identifys alphabetical chars
 *
 * @c: description here 
 *
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	int lastdig;

	if (c < 0)
		lastdig = -1 * (c % 10);
	else
		lastdig = c % 10;

	_putchar(lastdig + '0');
	return (lastdig);
}
