#include "holberton.h"

/**
* print_alphabet_10x - Prints 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	char i, l;

	for (l = 0; l <= 9; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
