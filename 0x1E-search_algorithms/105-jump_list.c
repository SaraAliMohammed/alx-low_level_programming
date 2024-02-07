#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *		using the Jump search algorithm.
 * @list: pointer to the head of the list to search in.
 * @size: the number of elements in list.
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, step_size;
	listint_t *node, *jump;

	if (!list || size == 0)
		return (NULL);

	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
