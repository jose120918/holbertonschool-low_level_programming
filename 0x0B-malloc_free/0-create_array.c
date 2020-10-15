#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - main function.
 * @size: Entero dado desde main.
 * @c: Caracter
 *
 * Description: Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Return: The pointer to dest.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(c));

	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
