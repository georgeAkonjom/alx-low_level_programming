#include "main.h"

/**
 * _isupper - check the code
 *
 * @c: checks input against ascii value.
 *
 * Return: Always 0.
 **/

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
