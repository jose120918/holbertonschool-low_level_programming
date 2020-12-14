#include "lists.h"

/**
 * print_dlistint - Funtion reads text file and prints lists
 *
 * @dlistint_t: the file to read
 * Return: size
 */
size_t print_dlistint(const dlistint_t *h)

size_t recorrido = 0;

while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	recorrido++;
}
return (recorrido);