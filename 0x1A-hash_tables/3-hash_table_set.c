#include "hash_tables.h"

/**
 * hash_table_set - add element to the hash table
 * @ht: hast to add
 * @key: the key for the hash
 * @value: value associated with the key
 *
 * Return: success or not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *list = NULL;
	unsigned long int i = 0;

	if (!new || !list || !ht)
		return (0);
	/* new space for the new element */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	/* index of the hash table */
	i = key_index((const unsigned char *)key, ht->size);
	/* hash table with i elements of the array */
	list = ht->array[i];
	while (list)
	{ /* compare number of the key*/
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			/* asigne the value*/
			list->value = strdup(value);
			return (1);
		}
		/* travel in the list */
		list = list->next;
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
