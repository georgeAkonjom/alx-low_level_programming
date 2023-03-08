#include "main.h"
/**
 * _print_rev_recursion - prints a string. Recursively.
 *
 * @s: pointer to input string.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s + 1;
	}
	else
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}
