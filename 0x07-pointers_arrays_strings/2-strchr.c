#include "main.h"
/**
* _strchr - Locates teh string character
* @s: The array to search
* @c: The character to search for
* Return: 0 (Success)
*/
char *_strchr(char *s, char c)
{

while ((*s != c) && (*s != '\0'))
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (0);
}

}
