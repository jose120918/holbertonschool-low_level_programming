#include "lists.h"

/**
 * print_dlistint - adds a new node
 * @h: Head of the list
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		new->next = *head;
		new->next->prev = new;
	}
	(*head) = new;
	return (new);
}