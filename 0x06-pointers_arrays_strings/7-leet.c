#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int k = 0;
	int l;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[k])
	{
		for (l = 0; l <= 7; l++)
		{
			if (str[k] == leet[l] ||
			    str[k] - 32 == leet[l])
				str[k] = l + '0';
		}

		k++;
	}

	return (str);
}
