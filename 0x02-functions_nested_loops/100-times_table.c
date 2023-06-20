#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of times
 *
*/

void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if prod is a single number
			 * place the first digit if it is two numbers
			*/
			if (prod <= n)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0'); /*get the first digit*/
			_putchar((prod % 10) + '0'); /*get the second digit*/
		}
		_putchar('\n');
	}
}
