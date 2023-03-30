#include "main.h"
/**
 * _strncat: concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i++])
{
j++;
}
for (i = 0; src[i]; i++)
{
dest[j++] = src[i];
}
return (dest);
}
