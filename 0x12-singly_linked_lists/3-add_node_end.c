#include "lists.h"

/**
 * add_node_end - Function
 * @head: first nodo
 * @str: String
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodo = malloc(sizeof(list_t)), *last = *head;
	int i;

	for (i = 0; str[i]; i++)
	;

	if (new_nodo)
	{

		new_nodo->str = strdup(str);
		new_nodo->len = i;
		new_nodo->next = NULL;

		if (*head == NULL)
		{
			*head = new_nodo;
		}
		else
		{
			while (last->next)
				last = last->next;
			last->next = new_nodo;
		}
		return (*head);
	}
	return (NULL);

}
