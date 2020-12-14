#include "lists.h"

/**
 * print_dlistint - returns the number of elements
 * @h: Head of the list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0; /* Variable for counting elements*/

	while (h) /* While list exist*/
	{
		h = h->next;
		i++;
	}
	return (i);
}