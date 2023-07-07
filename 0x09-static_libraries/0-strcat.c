#include "main.h"

/**
 * _strcat - appends the src string to the dest
 *	string, overwriting the terminating null
 *	byte (\0) at the end of dest, and then
 *	adds a terminating null byte
 * @dest: first parameter.
 * @src: second parameter.
 *
 * Return: pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0, i;

	while (dest[len1])
		len1++;
	for (i = 0; src[i]; i++)
		dest[len1++] = src[i];
	return (dest);
}
