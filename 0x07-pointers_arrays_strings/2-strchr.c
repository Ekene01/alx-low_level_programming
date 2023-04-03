#include "main.h"
/**
* _strchr - Locates teh string character
* @s: The array to search
* @c: The character to search for
* Return: 0 (Success)
*/
char *_strchr(char *s, char c)
{
for (int i = 0; i < strlen(s) - 1; i++)
{
if (*s == c)
return (s);
s++;
}
return (s);
}
