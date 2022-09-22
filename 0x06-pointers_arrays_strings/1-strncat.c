#include <stdio.h>
#include "main.h"
/**
 * *_strncat - the function that concatenates two strings
 * @dest: string to be concatenated
 * @src: destination for concatenated string
 * @n: condition for termination
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, k;

	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}
	for (k = 0; src[k] != '\0' && k < n; ++k, ++length)
	{
		dest[length] = src[k];
	}
	return (dest);
}
