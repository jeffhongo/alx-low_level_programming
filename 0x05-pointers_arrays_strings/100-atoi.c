#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: conversion result
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int sing = 1;
	int pole = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sing *= -1;
		}

		else
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				pole = 1;
				n = (n * 10) + (s[i] - '0');
				i++;
			}
		}

		if (pole == 1)
		{
			break;
		}

		i++;
	}

	n *= sing;
	return (n);
}
