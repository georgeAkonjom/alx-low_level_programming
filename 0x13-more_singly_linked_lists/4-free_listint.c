#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to a listint_t struct. The struct is to be freed.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *buffer = current;

		current = current->next;
		free(buffer);
	}
}
