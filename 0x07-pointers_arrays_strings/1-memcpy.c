#include "main.h"
/**
* *_memcpy - copy memory from source to destination
* @dest: pointer to be filled
* @src: source of array
* @n: numberf bytes to be filled
* Return: 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char *p = src;
unsigned char *r = dest;
int i = 0;
for (i = 0; i < n; i++)
{
r[i] = p[i];
}
}
