#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: number one
 * @s2: number two
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int r = 0;
while (s1[i] != '\0' && r == 0)
{
r = s1[i] - s2[i];
i++;
}
return (r);
}
