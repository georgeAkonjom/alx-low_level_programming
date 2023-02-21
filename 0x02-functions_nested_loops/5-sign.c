#include "main.h"

/**
 * _isalpha - identifys alphabetical chars
 *
 * @c: description here 
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar("+");
	}
	else if (n < 0)
	{
		return (-1);
		_putchar("-");
	}else if (n == 0)
	{
		return (0);
		_putchar("0");
	}else 
		return (0)
}
