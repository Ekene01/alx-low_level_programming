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
char *p = s;
while (n--)
{
*p++ = b;
}
return (s);
}
