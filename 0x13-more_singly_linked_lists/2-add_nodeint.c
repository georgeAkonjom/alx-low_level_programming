#include "lists.h"

/**
 * add_nodeint - adds a new node to the beggining of a linked list.
 * @head: a struct pointer to the first node. i think...
 * @n: the value our new struct is being made to hold.
 * Return: the address of the new elem, or null if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;

	*head = new;
	return (new);
}
