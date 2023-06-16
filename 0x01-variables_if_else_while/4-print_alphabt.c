#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program prints the alphabets except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
