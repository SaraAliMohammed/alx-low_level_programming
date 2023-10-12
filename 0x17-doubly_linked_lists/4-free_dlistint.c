#include "lists.h"

/**
 * free_dlistint  - frees a dlistint_t list.
 * @head: head of the list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
