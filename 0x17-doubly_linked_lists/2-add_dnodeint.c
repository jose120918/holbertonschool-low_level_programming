#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: Head of the list
 * @n: Int
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
