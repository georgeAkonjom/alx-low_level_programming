#include "lists.h"

/**
 * delete_node_int_at_index - deletes the node referred to by index.
 * @head: a double pointer to a struct. i think.
 * @index: an int. the refference to the node to be deleted.
 * Return: 1 if success -1 if fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *buffer = NULL;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	if (current->next)
	{
		for (i = 0; i < index - 1 && current->next != NULL; i++)
		{
			current = current->next;
		}

		buffer = current->next;
		current->next = buffer->next;
		free(buffer);	
	}
	return (1);
}
