#include "holberton.h"
/**
 * _strlen : returns the length
 * @s : string
 * Return : 0
 */
int _strlen(char *s)
{
int j = 0;
while (*(s + j))
{
j = j + 1;
}
return (j);
}
