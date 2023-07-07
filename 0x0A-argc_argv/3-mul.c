#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success),
 *	If the program does not receive two arguments, your
 *	program should print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
