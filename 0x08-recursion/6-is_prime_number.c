#include "holberton.h"
/**
 *primito - Funtion
 *@x: Variable
 *@n: Variable
 *Return: Int
 */
int primito(int x, int n)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x == n / 2)
		return (1);

	return (primito(++x, n));
}
/**
 * is_prime_number - Funtion
 * @n: Variable
 *
 * Return: Int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	if (n <= 1)
		return (0);

	return (primito(2, n));
}
