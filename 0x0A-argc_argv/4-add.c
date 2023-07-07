#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *	If no number is passed to the program, print 0
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success),
 *	If one of the number contains symbols that are
 *	not digits, print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9)
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
