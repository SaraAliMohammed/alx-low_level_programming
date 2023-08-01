#include "lists.h"

/**
 * free_listint2 - frees a linked listint_t list
 * @head: head of a list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *cursor;

	if (head != NULL)
	{
		cursor = *head;
		while ((temp = cursor) != NULL)
		{
			cursor = cursor->next;
			free(temp);
		}
		*head = NULL;
	}
}
