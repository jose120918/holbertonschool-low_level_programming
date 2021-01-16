#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sw = 0;
	hash_node_t *head = NULL;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < (*ht).size; i++)
		{
			if ((*ht).array[i] != NULL)
			{
				if (sw == 1)
					printf(", ");
				head = (*ht).array[i];
				while (head != NULL)
				{
					sw = 1;
					printf("'%s': '%s'", (*head).key, (*head).value);
					head = (*head).next;
					if (head != NULL)
					{
						printf(", ");
					}
				}
			}
		}
		printf("}");
		printf("\n");
	}
}
