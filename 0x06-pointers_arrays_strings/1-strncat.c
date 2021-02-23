#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: number one
 * @src: number two
 * @n: number three
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (*(dest + i) != '\0')
{
i++;
}
j = 0;
while ((j < n) && (*(src + j) != '\0'))
{
*(dest + i + j) = *(src + j);
j++;
}
*(dest + i + j + 1) = '\0';
return (dest);
}
