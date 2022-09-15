#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98.
 * @p: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int p)
{
	if (p < 98)
	{
		for (p = p; p < 98; p++)
			printf("%d, ", p);
		printf("%d\n", 98);
	}
	else
	{
		for (p = p; p > 98; p--)
			printf("%d, ", p);
		printf("%d\n", 98);
	}
}
