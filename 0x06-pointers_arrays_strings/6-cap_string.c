#include "main.h"

/**
 * isLower - test if character is lowercase.
 * @ch: character parameter.
 *
 * Return: 1 if lowercase, 0 if not.
*/

int isLower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

/**
 * isDelimiter - test if the chracter is delimiter.
 * @ch: character parameter.
 *
 * Return: 1 if delimiter, 0 if not.
*/

int isDelimiter(char ch)
{
	int i;
	char delimiters[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (ch == delimiters[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: string parameter.
 *
 * Return: string capitalized.
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimiter = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			foundDelimiter = 1;
		else if (isLower(*str) && foundDelimiter)
		{
			*str -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		str++;
	}
	return (ptr);
}
