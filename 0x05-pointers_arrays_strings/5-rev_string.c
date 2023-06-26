#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string parameter.
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
	int i = 0, j = 0;

	while (i++)
		s++;
	while (i--)
	{
		s[j++] = s[i--];
	}
	_putchar('\n');
}
