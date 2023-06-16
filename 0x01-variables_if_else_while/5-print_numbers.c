#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all single numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
		printf("%d", num++);
	printf("\n");
	return (0);
}

