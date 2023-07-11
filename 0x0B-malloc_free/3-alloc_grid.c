#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array,
 *	NULL on failure,
 *	NULL If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));

		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);

			free(ptr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}

	return (ptr);
}
