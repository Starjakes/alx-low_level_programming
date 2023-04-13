#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate a space
 * @b: unsigned int measured in byte
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);
if (x == NULL)
{
	exit(98);
}
return (x);
}
