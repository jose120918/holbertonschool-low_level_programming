#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: main
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next)
	{
		free_dlistint(head->next);
	}
	free(head);
}
