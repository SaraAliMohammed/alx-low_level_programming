#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of times
 *
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
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
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0'); /*get the second digit*/
			}
			_putchar('\n');
		}
	}
}
