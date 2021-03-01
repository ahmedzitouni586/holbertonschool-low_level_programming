#include "holberton.h"
/**
 * _strchr - locate a character in a string
 * @s: number one
 * @c: number two
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
