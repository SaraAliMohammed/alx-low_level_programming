#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 * @size: size of the array
 * @c: char used to intialize the array
 *
 * Return: pointer to the array, NULL if fail
 *
 **/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
