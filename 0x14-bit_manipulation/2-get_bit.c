#include "holberton.h"

/**
 * get_bit - Funcion de obtener un bit
 * @n: Numero
 * @index: index
 *
 * Return: Integral
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index >= (sizeof(unsigned long int) * 8)) ?
			-1 : (((1 << index) & n) == 0) ? 0 : 1);
}
