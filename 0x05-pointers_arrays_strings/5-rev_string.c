#include "holberton.h"
/**
 * rev_string - reverse a string
 *  @s : number one
 * Return : 0
 */
void rev_string(char *s)
{
char *start, *end, aux;
int i;
int size = 0;

start = s;
end = s;

while (*(s + size) != 0)
{
size++;
}

for (i = 0; i < size - 1; i++)
{
end++;
}
for (i = 0; i < size / 2; i++)
{
aux = *end;
*end = *start;
*start = aux;
start++;
end--;
}
}
