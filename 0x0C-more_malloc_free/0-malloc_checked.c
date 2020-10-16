#include "holberton.h"

/**
 * malloc_checked - Funtion
 *
 * @b: Unsigned variable
 *
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	int *ptn = malloc(b);

	if (!ptn)
		exit(98);

	return (ptn);
}
