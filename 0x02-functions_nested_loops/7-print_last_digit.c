#include "main.h"
/**
* print_last_digit- prints the last digit of an integer
*
* @i: The integer
*
* Return: Always 0
*/
int print_last_digit(int i)
{
if (i > 0)
return (i % 10);
else
return ((i % -10) * -1);
}
