#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to an struct of type listint_t.
 * Return: node count. ie i.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
