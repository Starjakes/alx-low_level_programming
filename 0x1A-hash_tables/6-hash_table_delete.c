#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table
 *
 * Return: void and delete hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int a = 0;
	unsigned int size;
	hash_node_t *temp, *aux;

	if (!ht)
		return;
	size = ht->size;
	for (a = 0; a < size; a++)
	{
		if (ht->array[a])
		{
			temp = ht->array[a];
			while (temp)
			{
				aux = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = aux;
			}
		}
		else
			free(ht->array[a]);
	}
	free(ht->array);
	free(ht);
}
