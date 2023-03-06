#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to be searched for
 * @accept: bytes to search for
 * Return: pointer to matched byte
 * or NULL if there is no match
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}


