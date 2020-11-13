#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head nodo
 *
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum;

	while (new)
	{
		sum += new->n, new = new->next;
	}
	return (sum);
}
