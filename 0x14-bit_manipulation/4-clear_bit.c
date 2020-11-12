#include "holberton.h"

/**
 * clear_bit - FUncion que limpia unbit
 * @n: ENtero long
 * @index: index of bitwise
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
