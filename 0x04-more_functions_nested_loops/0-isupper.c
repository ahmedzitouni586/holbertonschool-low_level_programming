#include "holberton.h"
/**
 * _isupper - upper-case character test
 * description - test the uppercase character
 * @c: number one
 * Return: non-zero
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))

return (1);

else

return (0);
}
