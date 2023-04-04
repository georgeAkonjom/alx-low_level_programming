#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: a pointer to a listint_t list.
 * @index: the index of the node we want returned.
 * Return: a pointer to a node of index: index. null if the node doesnt exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;

	for (i = 0; i < index; i++)
	{
		while (current != NULL)
			current = current->next;
	}
	return (head);
}
