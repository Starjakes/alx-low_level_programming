#include "main.h"

/**
 * _print_rev_recursion - function:Print a string in revers
 *
 * @s: The string to be printed
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
