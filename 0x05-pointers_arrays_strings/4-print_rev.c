#include "main.h"
/**
* print_rev - prints a string in reverse
* @str: String to be printed
* str - string to be printed
* Return: 0 (Success)
*/
void print_rev(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
for (count -= 1; count >= 0; count--)
{
_putchar(s[count]);
}
_putchar();
}
