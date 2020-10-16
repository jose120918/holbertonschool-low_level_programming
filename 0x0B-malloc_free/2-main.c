#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
