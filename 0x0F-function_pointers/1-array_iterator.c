#include "function_pointers.h"

/**
 * array_iterator - Execute a funtino as a parameter
 *
 * @array: Numbers
 * @size: size of the array
 * @action: Funtion's pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
