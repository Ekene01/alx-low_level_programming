#include "main.h"
/**
* puts2 - prints every other character
* @str: String to be printed
* Return: 0 (Success)
*/
void puts2(char *str)
{
for(; *str != '\0'; str=str+2)
{
_putchar(*str);
}
_putchar('\n');
}
