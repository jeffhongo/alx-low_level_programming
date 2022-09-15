#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @i: the number to be converted
 * Return:  absolute value of the interger above
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
