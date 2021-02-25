#include "holberton.h"
/**
 *int_islower - print alphabet lower case
 *
 *Return : 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
