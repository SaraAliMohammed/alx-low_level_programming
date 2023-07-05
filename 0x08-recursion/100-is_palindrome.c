#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string parameter
 *
 * Return: 1 if it is, 0 it is not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string parameter
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string parameter
 * @itr: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int itr, int length)
{
	if (*(s + itr) != *(s + length - 1))
		return (0);
	if (itr >= length)
		return (1);
	return (check_pal(s, itr + 1, length - 1));
}
