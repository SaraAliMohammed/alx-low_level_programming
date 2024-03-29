#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *		using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (array == NULL)
		return (-1);

	for (lo = 0, hi = size - 1; hi >= lo;)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
			* (value - array[lo]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			hi = pos - 1;
		else
			lo = pos + 1;
	}

	return (-1);
}
