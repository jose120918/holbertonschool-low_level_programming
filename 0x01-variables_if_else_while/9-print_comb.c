#include <stdio.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	int a = '0';

	do
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	} while (a <= '9');
	putchar('\n');
	return (0);
}