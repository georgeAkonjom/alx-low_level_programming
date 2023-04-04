#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of our linked list.
 * @head: a struct double pointer.
 * @n: the value our new struct is meant to hold.
 * Return: address of the new elem or null if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	listint_t *current = *head;

	if (current == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (*head);
}
