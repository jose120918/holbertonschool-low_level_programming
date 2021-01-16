#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			tmp = tmp->next;
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
