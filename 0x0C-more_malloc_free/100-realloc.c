#include "holberton.h"

/**
 * _realloc - Funtion that create an array if integers
 *
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);

}
