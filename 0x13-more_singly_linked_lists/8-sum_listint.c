#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listin_t list.
 * @head: input list.
 * Return: sum if null return 0;
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
