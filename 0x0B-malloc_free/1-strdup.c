#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a string
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
int i, l;
char *x;
if (str == NULL)
{
return (NULL);
}
l = 0;
while (str[l] != '\0')
l++;
x = malloc(sizeof(char) * l + 1);
if (x == NULL)
{
return (NULL);
}
else
{
for (i = 0; i <= l; i++)
x[i] = str[i];
}
x[i] = '\0';
return (x);
}
