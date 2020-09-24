#include <stdio.h>

/**
 * main - Prints all natural numbers from n to 98.
 * Return: retorna exit
 */
int main(void)
{
	int a = 1, b = 0, i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", b);
		printf("%d, ", a);
		 b = b + a;
		 a = a + b;
	}
	return (0);
}
