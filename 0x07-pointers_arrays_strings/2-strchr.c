#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched for
 * @c: the character to find
 * Return: pointer to the first occurrence if c is found
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (0);
}
