#include "main.h"
/**
* print_to_98- Function to print all natural numbers from n to 98
*
* @n - starting number
*
* Return: Always 0
*/
void print_to_98(int n)
{
int i;
for (i = n; i <=98; i++)
{
if(i != 98)
{
printf("%d", i);
_putchar(44);
_putchar(32);
}
else
{
printf("%d", i);
}
}
for (i = n; i >=98; i--)
{
if(i != 98){
printf("%d", i);
_putchar(44);
_putchar(32);
}
else {
printf("%d", i);
}
}
}
