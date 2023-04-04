#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest:char
 * @src:char
 * @n:int
 * Return:char pointer
 */
void *memcpy(void *restrict dest, const void *restrict src, size_t n);
{
		unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

return (dest);
}
