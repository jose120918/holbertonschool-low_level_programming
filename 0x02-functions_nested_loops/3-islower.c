#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return(0);
	}
}
