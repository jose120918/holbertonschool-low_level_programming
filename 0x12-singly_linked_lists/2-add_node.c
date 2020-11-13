#include "lists.h"

/**
 * add_node - Function
 * @head: first element
 * @str:
 *
 * Return:list_l
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *d = malloc(sizeof(list_t));
	int i;

	if (d)
	{
		for (i = 0; str[i]; i++)
		;
		d->str = strdup(str);
		d->len = i;
		d->next = *head;
		*head = d;
		return (d);

	}
	return (NULL);
}
