#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 *	If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
