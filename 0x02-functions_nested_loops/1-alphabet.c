#include "main.h"

/**
 * print_alphabet - Make the alphabet
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
		_putchar('\n');
	}
}
