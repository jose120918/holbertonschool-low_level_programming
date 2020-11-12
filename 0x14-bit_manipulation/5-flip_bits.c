#include "holberton.h"

/**
 * flip_bits - swap bits
 * @n: integer 1
 * @m: index 2
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int auxiliar = n ^ m, i = 0;

	while ((auxiliar ^ 0))
	{
		if ((auxiliar & 1) != 0)
			i++;
		auxiliar = i >> 1;
	}
	return (i);

}
