#include "holberton.h"
/**
 * _memcpy - copy memory area
 * @dest: number one
 * @src: number two
 * @n: number three
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *newsrc = (char *)src;
char *newdest = (char *)dest;
while (i < n)
{
newdest[i] = newsrc[i];
i++;
}
return (newdest);
}
