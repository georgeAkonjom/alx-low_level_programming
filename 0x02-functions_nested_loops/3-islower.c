#include "main.h"

/**
 * _islower - check the code
 *
 * @c: checks input against ascii value.
 *
 * Return: Always 0.
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
