#include <stdio.h>
/**
* main - A program that prints the alphabets from a-z using putchar
* Return: 0 (Success)
*/
int main()
{
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for(i = 0; i < 26; i++)
{
  putchar(alphabets[i]);
}
putchar('\n');
return 0;
}
