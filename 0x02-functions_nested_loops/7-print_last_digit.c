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
	signed int lastdig = c % 10;

	_putchar(lastdig + '0');
	return (lastdig);
}
