include "holberton.h"
#include <stdio.h>
/**
 * Butterfly - function
 * @s: string
 * @i: counter
 * @a: lenght of string
 * Return: value
 */
int Butterfly(char *s, int a, int i)
{
if (s[i] == s[a] && a != i)
return (Butterfly(s, --a, ++i));
if (s[i] == s[a] || i >= a)
return (1);
if (s[i] != s[a])
return (0);
return (1);
}
/**
 * ButterFly1 - lenght of the string
 * @s: string
 * @i: counter
 * Return: value
 */
int ButterFly1(char *s, int i)
{
if (s[i] != '\0')
return (ButterFly1(s, ++i));
return (--i);
}
/**
 * is_palindrome - check the number
 * @s: string
 * Return: value
 */
int is_palindrome(char *s)
{
int length;
length = ButterFly1(s, 0);
return (Butterfly(s, length, 0));
}
