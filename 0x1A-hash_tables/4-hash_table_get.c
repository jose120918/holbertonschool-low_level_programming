#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht:  hash table to look into
 * @key: key
 *
 * Return:  the value associated with the element. NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
