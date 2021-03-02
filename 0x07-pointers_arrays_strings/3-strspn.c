#include "holberton.h"
/**
 * _strspn - get the length of prefix
 * @s: first string
 * @accept: integer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
int c = 0;
int i = 0;
int j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
c++;
}
j++;
}
j = 0;
i++;
if (s[i] == ' ')
{
break;
}
}
return (c);
}
