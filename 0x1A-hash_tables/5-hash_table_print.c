#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table you want to print.
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char *separator = "";

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", separator, tmp->key, tmp->value);
			separator = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
