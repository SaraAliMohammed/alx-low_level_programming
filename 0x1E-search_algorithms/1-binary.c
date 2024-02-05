#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, med;

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (med = low; med < high; med++)
			printf("%d, ", array[med]);
		printf("%d\n", array[med]);

		med = low + (high - low) / 2;
		if (value == array[med])
			return (med);
		if (value < array[med])
			high = med - 1;
		else
			low = med + 1;
	}
	return (-1);
}
