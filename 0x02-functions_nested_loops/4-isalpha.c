#include "holberton.h"
#include <stdio.h>
/**
 *_isalpha - int isalpha
 * @c: first digit
 *Return: 1 if lowercase
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
