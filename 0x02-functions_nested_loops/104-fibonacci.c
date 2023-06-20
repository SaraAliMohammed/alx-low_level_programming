#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: finds and prints the first 98 Fibonacci numbers
 *	starting with 1 and 2
 *
 * Return: 0 on Success.
*/

int main(void)
{
	int i;
	unsigned long fld1 = 0, fld2 = 1, sum;

	for (i = 0; i < 98; i++)
	{
		sum = fld1 + fld2;
		printf("%lu", sum);
		fld1 = fld2;
		fld2 = sum;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
