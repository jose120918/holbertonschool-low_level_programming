#include "lists.h"

/**
 * print_listint_safe -
 *
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int nodes = 0;
	const listint_t *turtle = head;

	if (head == NULL)
	{
		return (0);
	}
	printf("[%p] %i\n", (void *)head, (*head).n);
	head = (*head).next;
	for (nodes = 0; head != NULL; nodes++)
	{
		if (head < turtle)
		{
			printf("[%p] %i\n", (void *)head, (*head).n);
		}
		else
		{
			printf("-> [%p] %i\n", (void *)head, (*head).n);
			break;
		}
		head = (*head).next;
		turtle = (*turtle).next;
	}
	return (nodes + 1);
}
