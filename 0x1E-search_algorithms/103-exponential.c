#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @left: the left element.
 * @right: the right element.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t med;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (med = left; med < right; med++)
			printf("%d, ", array[med]);
		printf("%d\n", array[med]);

		med = left + (right - left) / 2;
		if (value == array[med])
			return (med);
		if (value < array[med])
			right = med - 1;
		else
			left = med + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *		using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
