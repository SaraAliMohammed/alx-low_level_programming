#include "lists.h"
/**
 * list_len - returns then number of elements in a linked list_t list.
 * @h: pointer to linked list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
