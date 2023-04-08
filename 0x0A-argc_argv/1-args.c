#include <stdio.h>
/**
 * main - function:prints out the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
