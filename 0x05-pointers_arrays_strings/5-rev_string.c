#include "main.h"

/**
* rev_string -> reverse a string
* @s: the string to reverse
*/
void rev_string(char *s)
{
	char c;
	int a, lengthC, lengthD;

	lengthC = 0;
	lengthD = 0;

	while (s[lengthC] != '\0')
		lengthC++;

	lengthD = lengthC - 1;
	for (a = 0; a < lengthC / 2; a++)
	{
		c = s[a];
		s[a] = s[lengthD];
		s[lengthD] = c;
		lengthD -= 1;
	}
}
