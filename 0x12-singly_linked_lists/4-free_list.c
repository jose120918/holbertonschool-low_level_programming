#include "lists.h"

/**
 * free_list - Functinos
 * @head: list_t
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
