#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head: head of a list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
