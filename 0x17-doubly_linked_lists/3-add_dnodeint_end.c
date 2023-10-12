#include "lists.h"

/**
 * add_dnodeint_end  - adds a new node at the end of a dlistint_t list.
 * @head: head of the list.
 * @n: list data.
 *
 * Return: the address of the new element,
 *	or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}
