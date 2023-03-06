#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: a pointer to memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 * Return: a pointer to the filled memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
