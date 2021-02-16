#include "holberton.h"
/**
 * *_strcpy - copying from src to dest
 * @dest: destination variable
 * @src: source variable
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int size = 0;
int j;

while (*(src + size) != 0)
{
size++;
}
for (j = 0; j <= size; j++)
{
dest[j] = src[j];
}
return (dest);
}
