#include "holberton.h"
/**
 * decimal_binary - IMprimir en binario
 *
 * @n: Numero decimal.
 * Return: REtorno
 */
void decimal_binary(unsigned long int n)
{
	if (n == 0)
		return;

	decimal_binary(n >> 1);
	n = n & 1;
	_putchar(n + 48);
}

/**
 * print_binary - FUncion que convierte en binario
 * @n: BIneario convertido
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		decimal_binary(n);
}
