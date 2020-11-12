#include "holberton.h"

/**
 * set_bit - funcion set-bit
 * @n: numero
 * @index: index
 *
 * Return: integegral
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
