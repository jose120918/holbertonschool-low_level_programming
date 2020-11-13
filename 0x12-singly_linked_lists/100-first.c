#include <stdio.h>
void printBeforName(void) __attribute__ ((constructor));
/**
 * printBeforName - prints something bofore main be executed
 * Return: nothing
 */
void printBeforName(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
