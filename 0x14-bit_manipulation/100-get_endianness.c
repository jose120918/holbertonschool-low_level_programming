#include "holberton.h"
#include <stdint.h>

/**
 * get_endianness - FUncion endian
 *
 * Return: int
 */
int get_endianness(void)
{
	int i = 1;
	char *endian;

	endian = (char *)&i;

	return (*endian);
}
