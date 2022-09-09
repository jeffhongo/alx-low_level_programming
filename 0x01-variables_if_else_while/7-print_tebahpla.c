#include <stdio.h>

/**
 * main - first line 
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);

	putchar('\n');

	return (0);
}
