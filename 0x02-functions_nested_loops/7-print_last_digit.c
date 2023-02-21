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
	lastdig = c % 10;
	_putchar('0' + lastdig);
	return (lastdig);
}
