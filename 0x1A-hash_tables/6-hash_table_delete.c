#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: hash table pointer.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *tnode, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tnode = ht->array[i];
			while (tnode != NULL)
			{
				temp = tnode->next;
				free(tnode->key);
				free(tnode->value);
				free(tnode);
				tnode = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
