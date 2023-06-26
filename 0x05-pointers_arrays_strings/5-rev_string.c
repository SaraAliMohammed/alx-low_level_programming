#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string parameter.
 *
 * Return: Nothing.
*/

void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len])
		s++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	_putchar('\n');
}
