#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatination of s1 and s2,
 *	NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	conct = malloc((len1 + len2 + 1) * sizeof(char));

	if (conct == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		conct[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')
	{
		conct[len1] = s2[len2];
		len1++, len2++;
	}
	conct[len1] = '\0';
	return (conct);
}
