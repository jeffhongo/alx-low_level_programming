#include <stdio.h>

/**
*main - print the number of arguments in the list
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
