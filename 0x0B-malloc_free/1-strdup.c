#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: pointer to the duplicated string,
 *	NULL if insufficient memory was available,
 *	NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *newstr;
	int length = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	newstr = malloc((length + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		newstr[i] = str[i];

	return (newstr);
}
