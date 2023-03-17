#include <stdio.h>
/**
* main - A program that prints the alphabets from a-z using putchar
* Return: 0 (Success)
*/
int main()
{
for(int x = 'a'; x <= 'z'; x++)
{
char small = x;
putchar(small);
}
return 0;
}
