#include"main.h"

/**
 * rev_string - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
