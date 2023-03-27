#include "main.h"
/**
* _puts - prints a string followed by a new line
* @str - String to be printed
* Return: 0 (Success)
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
