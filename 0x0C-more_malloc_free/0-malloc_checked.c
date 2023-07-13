#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 *	If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);

	return (p);
}
