#include "lists.h"

/**
 * free_listint2 - frees a listint_t list. sets head to null.
 * @head: a double pointer to a listint_t list.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *buffer = current;

		current = current->next;
		free(buffer);
	}
	*head = NULL;
}
