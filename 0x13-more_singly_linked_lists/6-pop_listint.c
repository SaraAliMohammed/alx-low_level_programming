#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked listint_t list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h, *cursor;

	if (*head == NULL)
		return (0);

	cursor = *head;

	hnode = cursor->n;

	h = cursor->next;

	free(cursor);

	*head = h;

	return (hnode);
}
