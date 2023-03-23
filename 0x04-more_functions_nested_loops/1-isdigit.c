#include "main.h"
/**
* _isdigit - A program that checks if c is a digit
* @c: value to be checked
* Return: 0 (Success)
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
