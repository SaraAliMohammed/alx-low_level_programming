#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program prints the alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
