#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: array to be printed.
 * @n: number of elements of the array to be printed.
 *
 * Return: Nothing.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + 0);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
}
