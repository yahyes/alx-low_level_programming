#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and
 * initilize with char c
 * @size: size of array to create
 * @c: char to initialize array with
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
