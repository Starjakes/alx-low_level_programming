#include "hash_tables.h"

/**
 *  hash_table_print - prints a hash table.
 * @ht: pointer to a hash table
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int a = 0, first = 0;
	unsigned int size;
	hash_node_t *temp;

	if (!ht)
	{
		return;
	}
	printf("{");
	size = ht->size;
	for (a = 0; a < size; a++)
	{
		if (ht->array[a])
		{
			temp = ht->array[a];
			while (temp)
			{
				if (!first)
				{
					printf("\'%s\': \'%s\'", temp->key, temp->value);
					first = 1;
				}
				else
					printf(", \'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
