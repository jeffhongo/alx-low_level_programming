#include <stdio.h>
#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: string to append to @dest
 * @src: string to be concatenated
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int length, k;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}
	for (k = 0; src[k] != '\0'; ++k, ++length)
	{
		dest[length] = src[k];
	}
	dest[length] = '\0';
	return (dest);
}
