#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: the resulting square root,
 *	-1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 *	square root of a number
 *
 * @n: number
 * @itr: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int itr)
{
	if (itr * itr > n)
		return (-1);
	if (itr * itr == n)
		return (itr);
	return (actual_sqrt_recursion(n, itr + 1));
}
