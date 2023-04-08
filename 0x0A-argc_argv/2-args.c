#include <stdio.h>
/**
 * main - function: A program that prints all the arguments it receives
 * @argc:int argument count
 * @argv:string argument vector
 * Return:0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
