#include "main.h"

/**
 * print_sign - identifys alphabetical chars
 *
 * @n: description here 
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45 + 0);
		return (-1);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}
}
