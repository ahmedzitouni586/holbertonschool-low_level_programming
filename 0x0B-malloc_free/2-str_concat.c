#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0;
char *a;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
a = malloc(len1 + len2 + 1);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
a[i] = s1[i];
for (j = 0; j < len2; j++)
a[len1 + j] = s2[j];
a[len1 + len2] = '\0';
return (a);
}
