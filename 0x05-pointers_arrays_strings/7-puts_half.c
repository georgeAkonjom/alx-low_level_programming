#include"main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/

void puts_half(char *str)
{
	int i, c;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (c = 0; c < i; ++c)
	{
		if (c >= i / 2)
			_putchar(str[c]);

	}
}
