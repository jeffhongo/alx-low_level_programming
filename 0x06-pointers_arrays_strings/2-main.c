#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int k;

    for (k = 0; k < 98 - 1; k++)
    {
        s1[k] = '*';
    }
    s1[k] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (k = 0; k < 98; k++)
    {
        if (k % 10)
        {
            printf(" ");
        }
        if (!(k % 10) && k)
        {
            printf("\n");
        }
        printf("0x%02x", s1[k]);
    }
    printf("\n");
    return (0);
}
