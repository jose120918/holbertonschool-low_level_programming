#include <stdio.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	int i = 0;

	for (i = 0; i < 100 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 99)
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}