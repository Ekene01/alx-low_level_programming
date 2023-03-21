#include "main.h"
/**
* print_sign- Shows 1 if the integer is greater than 0, 0 if integer is 0 and -1 if integer is less than 0
*
* @n: The integer
*
* Return: 1 for letter character. 0 for the rest
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
}
