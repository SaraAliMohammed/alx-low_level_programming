#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program prints all single numbers using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		/*Convert num to ascii representation*/
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
