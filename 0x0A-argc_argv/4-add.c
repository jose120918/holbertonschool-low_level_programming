#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Principal funtion
 *
 * @argc: Variable
 * @argv: Array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, tot;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			tot = tot + atoi(argv[i]);

		}

	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", tot);
	return (0);
}
