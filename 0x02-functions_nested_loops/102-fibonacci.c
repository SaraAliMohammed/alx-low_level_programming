#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: prints the first 50 Fibonacci numbers,
 *	starting with 1 and 2
 *
 * Return: 0 on Success.
*/

int main(void)
{
	int i;
	unsigned int fld1 = 1, fld2, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fld1 + fld2;
		printf("%1u", sum);
		fld1 = fld2;
		fld2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
