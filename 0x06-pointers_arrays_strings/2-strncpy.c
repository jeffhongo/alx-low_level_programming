#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: string to be copied
 * @src: copied string destination
 * @n: condition at which string is copied
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, length;

	length = 0;
	k = 0;

	while (src[k++])
	{
		length++;
	}
	for (k = 0; src[k] && k < n; k++)
	{
		dest[k] = src[k];
	}
	for (k = length; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
