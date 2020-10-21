#include <stdio.h>
#include <stdlib.h>

/**
 * main - Funtion
 *
 * @argc: size
 * @argv: Array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int coins_num = 0, i;

	if (argc == 2)
	{
		int e = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			for (; e - coins[i] >= 0; coins_num++)
			{
				e -= coins[i];
			}
		}
		printf("%d\n", coins_num);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
