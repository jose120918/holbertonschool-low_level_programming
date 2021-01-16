#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key to looking for
* Return: the value associated with the element
* or NULL if key couldn’t be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (ht != NULL)
	{
		if (key != NULL)
		{
			index =  hash_djb2((unsigned char *)key) % (*ht).size;
			if ((*ht).array[index] != NULL)
			{
				head = (*ht).array[index];
				while (head != NULL)
				{
					if (strcmp((*head).key, key) == 0)
					{
						return ((*head).value);
					}
					head = (*head).next;
				}
			}
		}
	}
	return (NULL);
}
