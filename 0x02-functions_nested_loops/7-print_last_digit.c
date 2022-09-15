#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : this is the number to be checked
 * Return: O or 1
 */

int print_last_digit(int n)
{
	int vn;

	if (n < 0)
		vn = -1 * (n % 10);
	else
		vn = n % 10;

	_putchar(vn + '0');
	return (vn);
}
