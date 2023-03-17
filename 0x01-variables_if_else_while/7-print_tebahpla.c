#include <stdio.h>
/**
* main - A program that prints alphabets from z-a
* Return: 0 (Success)
*/int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
char small = i;
putchar(small);
}
putchar('\n');
return (0);
}
