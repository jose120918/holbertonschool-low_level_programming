#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: Head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t iterador = 0;

	while (h)
	{
		h = h->next;
		iterador++;
	}
	return (iterador);
}
