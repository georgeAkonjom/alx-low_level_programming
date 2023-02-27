#include "main.h"

/**
 * _strlen - identifys alphabetical chars
 *
 * @s: description here
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
		++i;

	return (i);
}
