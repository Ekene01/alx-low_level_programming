#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: Memory Area
* @b: constant byte
* @n: number of bytes to be filled
* Return: 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p = s;
for (i = 0; i < n; i++)
{
_putchar(b);
*p++ = b;
}
 return (s);
}
