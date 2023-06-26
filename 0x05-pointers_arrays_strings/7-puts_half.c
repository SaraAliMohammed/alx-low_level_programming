#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter.
 *
 * Return: Nothing.
*/

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
		;
	for (i = 0; i <= (len - 1) / 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
