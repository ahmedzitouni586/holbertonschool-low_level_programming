#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @n: number one
 * Return: 0
 */
char *cap_string(char *n)
{
int i = 0;

while (*(n + i) != '\0')
{
if (i == 0 && *(n + i) >= 97 && *(n + i) <= 122)
{
*(n + i) -= 32;
}
if (*(n + i) == '\n'
|| *(n + i) == '\t'
|| *(n + i) == ' '
|| *(n + i) == '.'
|| *(n + i) == ';'
|| *(n + i) == ','
|| *(n + i) == '!'
|| *(n + i) == '?'
|| *(n + i) == '"'
|| *(n + i) == '('
|| *(n + i) == ')'
|| *(n + i) == '{'
|| *(n + i) == '}')
{
if (*(n + i + 1) >= 97 && *(n + i + 1) <= 122)
*(n + i + 1) -= 32;
}
i++;
}
return (n);
}
