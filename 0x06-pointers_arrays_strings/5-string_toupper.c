#include "holberton.h"
/**
 * string_toupper - change all lowercase letter
 * @n: number one
 * Return: 0
 */
char *string_toupper(char *n)
{
int i = 0;

while (*(n + i) != '\0')
{
if (*(n + i) >= 'a' && *(n + i) <= 'z')
{
*(n + i) = *(n + i) - 32;
}
i++;
}
return (n);
}
