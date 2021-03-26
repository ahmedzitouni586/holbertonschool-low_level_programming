#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 * Return: 0
 */
int main(void)
{
int i, j;
time_t t;
int number, somme;
char a[100];
srand((unsigned int) time(&t));
number = 0;
while (somme != 2772)
{
somme = 0;
j = 0;
for (i = 2772; i >= 65; i -= number)
{
number = rand() % 58 + 65;
somme = somme + number;
a[j++] = number;
}
}
a[j] = '\0';
printf("%s\n", a);
return (0);
}
