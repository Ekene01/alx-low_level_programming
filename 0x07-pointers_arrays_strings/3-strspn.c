#include "main.h"
/**
 * _strspn - A function to get length of substring
 * @s: The string we are searching
 * @accept: The values we are searching for
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	while (*s)
	{
		for(i=0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return(length);
			}
			s++;
		}
		return (length);
	}
}
