#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: NULL If min > max or the function fails,
 *	pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
