#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: first parameter.
 * @src: second parameter.
 * @n: number of bytes.
 *
 * Return: pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
