#include <stdlib.h>

/**
 * print_name - Prints a name
 *
 * @name: String
 * @f: Pointer to funtion
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
