
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Lanzador
*
* Return: Always 0
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int caca = n % 10;
	if (caca > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, caca);
	}
	else if (caca == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, caca);
	}
	else
	{
		printf("Last digit of %d is %0d and is less than 6 and not 0\n", n, caca);
	}
	return (0);
}