#include <stdio.h>
/**
* main - A program that prints the alphabets from a-z and A-Z using putchar
* Return: 0 (Success)
*/int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
char small = i;
putchar(small);
}
for (i = 'A'; i <= 'Z'; i++)
{
char small = i;
putchar(small);
}
 return (0);
}
