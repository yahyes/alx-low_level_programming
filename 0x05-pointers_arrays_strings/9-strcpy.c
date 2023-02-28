#include "main.h"

/**
 * _strcpy -  a function that copies the string
 * @dest - destination value
 * @src - the source value
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

