#include "main.h"

/**
 * print_rev -  prints a string, in reverse.
 * @s: string to be printed.
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i;

	while(s[i])
		i++;
	while(i--)
		_putchar(s[i]);
	_putchar('\n');
}
