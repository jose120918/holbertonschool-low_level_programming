#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node.
 * @head: mainlist
 * @index:  index node
 * Return: NULL is doedn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterador = 0;

	while (head)
	{
		if (iterador == index)
			return (head);
		iterador++;
		head = head->next;
	}
	return (NULL);
}
