#include "hash_tables.h"

/**
* hash_table_set -  adds an element to the hash table
* @ht: hash table
* @key: the key
* @value: the value associated with the key
* Return: 1 if it succeeded, 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	unsigned long int index, sw = 0;
	hash_node_t *head = NULL;

	if (ht)
	{
		if (key != NULL)
		{

			index = key_index((unsigned char *)key, (*ht).size);
			if ((*ht).array[index] != NULL)
			{
				head = (*ht).array[index];
				while (head != NULL)
				{
					if (strcmp(key, (*head).key) == 0)
					{
						free((*head).value);
						(*head).value = strdup(value);
						sw = 1;
						break;
					}
					head = (*head).next;
				}
			}
			if (sw == 0)
			{
				newNode = malloc(sizeof(hash_node_t));
				if (newNode == NULL)
					return (0);
				(*newNode).value = strdup(value);
				(*newNode).key = strdup(key);
				(*newNode).next = (*ht).array[index];
				(*ht).array[index] = newNode;
			}
			return (1);
		}
	}
	return (0);
}
