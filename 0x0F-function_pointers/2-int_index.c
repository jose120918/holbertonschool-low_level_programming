#include "function_pointers.h"

/**
 * int_index - Search an integer
 *
 * @array: Array of the numbers
 * @size: Size of the array
 * @cmp: pointer of the funtion
 *
 * Return: An integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
