#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 48; /*decimal representation of 0*/

	while (num <= 102) /*decimal rep. of f*/
	{
		putchar(num);
		/*after 9 we jump till 96*/
		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');
	return (0);
}
