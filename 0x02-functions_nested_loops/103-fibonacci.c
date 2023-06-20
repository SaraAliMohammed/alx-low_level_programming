#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: program finds and prints the sum of the even-valued terms
 *
 * Return: 0 on Success.
*/

int main(void)
{
	float total_sum;
	unsigned long fld1 = 0, fld2 = 1, sum;

	while (total_sum < 4000000)
	{
		sum = fld1 + fld2;

		if ((sum % 2) == 0)
			total_sum += sum;
		fld1 = fld2;
		fld2 = sum;

		printf("%.0f\n", total_sum);
	}

	return (0);
}
