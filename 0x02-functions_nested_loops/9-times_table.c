#include "main.h"
/**
 * times_table - prints the multiplaction table from 0 - 9.
 *
 * Return: Nill
 */
void times_table(void)
{
	int k, l, res;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 9; l++)
		{
			res = (k * l);
			if (l != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && l != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
