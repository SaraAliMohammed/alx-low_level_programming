#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a sorted array
 *				of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @left: the left element.
 * @right: the right element.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t med;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (med = left; med < right; med++)
		printf("%d, ", array[med]);
	printf("%d\n", array[med]);

	med = left + (right - left) / 2;
	if (array[med] == value && (med == left || array[med - 1] != value))
		return (med);
	if (array[med] >= value)
		return (advanced_binary_recursive(array, left, med, value));
	return (advanced_binary_recursive(array, med + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
