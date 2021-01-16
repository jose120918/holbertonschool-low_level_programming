#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table.
 * @ht: hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int count = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			count++;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
