#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: action to take
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		exit(98);
	
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

