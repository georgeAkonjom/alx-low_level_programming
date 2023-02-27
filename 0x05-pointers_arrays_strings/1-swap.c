#include "main.h"

/**
 * swap_int - swaps two ints one with the other.
 *
 * @a: description here
 * @b: description here
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
