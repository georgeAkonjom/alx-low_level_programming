#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at the index idx.
 * @idx: the index.
 * @head: the linked list to add a node to.
 * Return: address of the new node. null if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *current;

	current = *head;
	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
	}
	else if (current->next) /*checks if there is a node after the index.*/
	{
		new->next = current->next; /*if yes this code runs.*/
		new->n = n;
	}
	else
	{
		new->next = NULL;
		current->next = new;
	}
	current->next = new;
	return (new);
}
