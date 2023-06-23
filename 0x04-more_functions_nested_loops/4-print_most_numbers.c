#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 *	Do not print 2 and 4
 *
 * Return: 0 on Success
*/

void print_most_numbers(void)
{
	int i = 0;

	do {
		if ( i!= 2 || i != 4)
			_putchar(i + '0');
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
