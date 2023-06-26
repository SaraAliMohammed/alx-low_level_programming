#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *	starting with the first character.
 * @str: string parameter.
 *
 * Return: Nothing
*/

void puts2(char str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}
	_putchar('\n');
}
