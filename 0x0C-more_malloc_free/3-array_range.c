#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: min of array range
 * @max: max of array range
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int index;
	int *pointer;
	int len;

	if (min > max)
		return (NULL);

	len = 0;
	for (index = 0; index <= max; index++)
		len++;

	pointer = malloc(sizeof(int) * len);
	if (pointer == NULL)
		return (NULL);

	index = 0;
	while (min <= max)
	{
		pointer[index] = min;
		index++;
		min++;
	}
	return (pointer);
}



