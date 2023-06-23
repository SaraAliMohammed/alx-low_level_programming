#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: 0 on Success
*/

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + '0');
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
