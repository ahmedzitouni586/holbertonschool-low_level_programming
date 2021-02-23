#include "holberton.h"
/**
 * rot13 - encode a string
 * @n: string
 * Return: 0
 */
char *rot13(char *n)
{
int i = 0;
int j;
char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*(n + i) != '\0')
{
for (j = 0; j <= 51; j++)
{
if (*(n + i) == normal[j])
{
*(n + i) = rotated[j];
break;
}
}
i++;
}
return (n);
}
