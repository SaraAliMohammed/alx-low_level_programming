#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @i: parameter to be passed
 *
 * Return: absolute of i
*/

int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
