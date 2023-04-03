#include "main.h"
/**
 * _strspn - Gets the length of a substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
		return (length);
}

