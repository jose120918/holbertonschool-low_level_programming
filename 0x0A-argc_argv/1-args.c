#include <stdio.h>

/**
 * main - Funtion
 *
 * @argc: Integer
 * @argv: Array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(argc != 0 && *argv) ? printf("%d\n", argc - 1) : putchar('\n');
	return (0);
}
