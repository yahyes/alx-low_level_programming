#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies strings to pointers
 * @dest: - output
 * @src: - source value
 * Return: (p)
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (p);
}

