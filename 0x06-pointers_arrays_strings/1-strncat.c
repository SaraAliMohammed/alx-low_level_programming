#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first Parameter.
 * @src: second parameter.
 * @n: number of bytes.
 *
 * Return: pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i;

	while (dest[len1])
		len1++;

	for (i = 0; i < n && src[i]; i++)
		dest[len1++] = src[i];
	dest[len1] = '\0';
	return (dest);
}
