#include "main.h"
/**
 *  print_sign - prints the soign of a number
 *  @n: this is the character that is to be checked
 *  Return: 1 and prints +, 0 and prints 0, 1 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
