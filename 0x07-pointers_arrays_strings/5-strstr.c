#include "holberton.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
if (needle[j] != '\0')
return (needle);
while (haystack[i] != '\0')
{
if (haystack[i] == needle[j])
return (&needle[j]);
}
i++;
j++;
return (0);
}
