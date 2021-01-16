#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table to delete
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		for (i = 0; i < (*ht).size; i++)
		{
			if ((*ht).array[i] != NULL)
			{
				while ((*ht).array[i] != NULL)
				{
					tmp = (*(*ht).array[i]).next;
					free((*(*ht).array[i]).key);
					free((*(*ht).array[i]).value);
					free((*ht).array[i]);
					(*ht).array[i] = tmp;
				}
			}
			free((*ht).array[i] = NULL);
		}
	}
	free((*ht).array);
	free(ht);
}
