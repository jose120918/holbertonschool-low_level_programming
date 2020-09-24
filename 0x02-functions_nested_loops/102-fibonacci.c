#include <stdio.h>

/**
 * main - Prints all natural numbers from n to 98.
 * Return: retorna exit
 */
int main(void)
{
	int a = 2, b = 1, i;

	for (i = 1; i < 50; i++)
	{
		printf("%d, \n", b);
		printf("%d, \n", a);
		 b = b + a;
		 a = a + b;
	}
	return (0);
}
