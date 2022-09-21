#include <stdio.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @wrd1: string to append to @wrd1
 * @wrd2: string to be concatenated
 * Return: a pointer to the resulting string dest
 */

int main(void)
{
	char  wrd1[100] = "Hello" , wrd2[] = "World";
	strcat(wrd1, wrd2);

	puts(wrd1);
	puts(wrd2);

	return (0);
}
