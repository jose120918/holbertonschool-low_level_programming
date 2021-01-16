#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update
 * @key: is the key
 * @value:the value associated with the key.
 * Return: 1 if it succeeded, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] && !(match(key, ht->array[idx], value)))
		return (1);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!(new->key) || !(new->value))
	{
		if (new->key)
			free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}

/**
 *match - Check if a key value is already in a bucket.
 * @key: key
 * @arry: bucket
 * @value: node value to update
 * Return: 1 if not match and 0 if match
 */
int match(const char *key, hash_node_t *arry, const char *value)
{
	hash_node_t *elment = arry;

	while (elment)
	{
		if (!(strcmp(elment->key, key)))
		{
			free(elment->value);
			elment->value = strdup(value);
			return (0);
		}
		elment = elment->next;
	}
	return (1);
}
