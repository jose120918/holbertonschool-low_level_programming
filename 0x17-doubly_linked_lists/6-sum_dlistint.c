#include "lists.h"
/**
 * sum_dlistint - The sum of all the data (n) of a list.
 * @head: main list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
