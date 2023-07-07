#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first parameter.
 * @s2: second parameter.
 *
 * Return: 0 if eqal,
 *	-1 if leth than,
 *	1 if greater than.
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (result);
}
