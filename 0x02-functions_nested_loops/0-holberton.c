#include "holberton.h"
/**
 * main - entry point
 * display message with new line
 * Return: Sucess
 */
int main(void)
{
int i;
char c[10] = "Holberton";

for (i = 0; i <= 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');

return (0);
}
