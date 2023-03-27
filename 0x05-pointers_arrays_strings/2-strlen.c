<<<<<<< HEAD
int _strlen(char *s)
{
  unsigned int count = 0;
  while (*s != '\0')
  {
      count++;
      s++;
  }
  return  count;
=======
#include "main.h"
/**
* _strlen - A function that returns the length of a string
*
* @s: Pointer to string that should be counted
*
* Return: 0
*/
int _strlen(char *s)
{
unsigned int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
>>>>>>> b3abb7ce7dce42798a0a5d4df82965468b38964c
}
