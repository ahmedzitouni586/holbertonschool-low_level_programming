#include "holberton.h"
#include <stdio.h>
/**
 *int _isalpha - int isalpha
 *
 *Return : 1 if lowercase
 *Return : 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
