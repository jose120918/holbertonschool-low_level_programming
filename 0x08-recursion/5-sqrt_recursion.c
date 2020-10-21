#include "holberton.h"

/**
 *  *_lpow - Funtion
 *
 *@x: variable
 *@n: variable
 *
 * Return: Funtion
 */
int _lpow(int x, int n)
{
	if ((x * x) > n)
		return (-1);
	if (x * x == n)
		return (x);
	x++;
	return (_lpow(x, n));
}
/**
 * _sqrt_recursion - Funtion
 *
 * @n: Variable
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (_lpow(2, n));

}
