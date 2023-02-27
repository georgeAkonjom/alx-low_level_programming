#include "main.h"

/**
 * _puts - identifys alphabetical chars
 *
 * @str: description here
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	char c;

	while (*str != '\0')
	{

		c = *str;
		_putchar(c);
		++str;
	}
	_putchar('\n');

}
