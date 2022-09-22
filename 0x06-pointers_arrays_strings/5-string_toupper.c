#include "main.h"
/**
 * *string_toupper - function that changes lower case to uppercase
 * @str: string to be changed to uppercase
 * Return: points to the changed string
 */
char *string_toupper(char *str)
{
	int k = 0;

	while (str[k])
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] -= 32;

		k++;
	}

	return (str);
}
