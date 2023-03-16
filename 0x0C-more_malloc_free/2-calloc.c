#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: a pointer or a NULL value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (index = 0; index < nmemb * size; index++)
		pointer[index] = 0;

	return (pointer);
}

