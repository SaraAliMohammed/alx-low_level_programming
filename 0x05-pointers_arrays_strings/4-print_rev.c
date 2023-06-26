#include "main.h"

/**
 * print_rev -  prints a string, in reverse.
 * @s: string to be printed.
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i, length;

	length = _strlen(s);
	for (i = length - 1; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
