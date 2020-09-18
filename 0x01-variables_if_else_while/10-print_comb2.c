#include <stdio.h>

/**
* main - Lanzador.
*
* Return: Always 0.
*/

int main(void)
{
	int a = '00';


	while (a <= '99')
	{
		putchar(a);
		if (a == '99')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
}