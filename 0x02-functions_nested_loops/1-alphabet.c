#include "main.h"

/**
 * print_alphabet -  Function prints the alphabet, in lowercase using _putchar
 *
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
