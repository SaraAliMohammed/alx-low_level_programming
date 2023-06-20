#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @num: parameter to be passed
 *
 * Return: value of the last digit
*/

int print_last_digit(int num)
{
	int lastdigit;

	if (num < 0)
		lastdigit = -1 * (num % 10);
	else
		lastdigit = num % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
