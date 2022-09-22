#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int k, l;

	for (l = n - 1; l >= n / 2; l--)
	{
		k = a[n - 1 - l];
		a[n - 1 - l] = a[l];
		a[l] = k;
	}
}
