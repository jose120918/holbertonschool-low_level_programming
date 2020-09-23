#include "holberton.h"

/**
* print_alphabet_10x - Correr funcion de imprimir alfabeto 10 veces
*/
void print_alphabet_x10(void)
{
	char i, l;

	for (l = 0; l <= 10; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
