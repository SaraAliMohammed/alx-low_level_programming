#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to calculate its fractional
 *
 * Return: factorial of n,
 *	-1 if n lower than 0,
 *	1 if n eqal to 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
