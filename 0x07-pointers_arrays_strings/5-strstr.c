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
while ((haystack[i] != '\0') && (needle[j] != '\0'))
{
i++;
j++;
}
if (haystack[i] == needle[j])
{
return (haystack);
}
else
{
return (needle);
}
}
