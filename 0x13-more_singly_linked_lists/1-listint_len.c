#include "lists.h"

/**
 * listint_len - returns the number of elems in a linked list.
 * @h: a pointer to a linked list of type listint_t.
 * Return: an unsigned in. size_t.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
