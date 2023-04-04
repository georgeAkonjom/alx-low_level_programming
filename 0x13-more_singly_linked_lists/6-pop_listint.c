#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: delete me,
 * Return: head nodes data (n). if head is NULL return 0;
 */

int pop_listint(listint_t **head)
{
	int headval;
	listint_t *aux, *buffer;

	if (*head == NULL)
		return (0);

	aux = *head;
	buffer = aux->next;
	headval = aux->n;

	free(aux);

	*head = buffer;
	return (headval);
}
