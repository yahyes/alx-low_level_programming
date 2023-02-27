#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 *
 * @a: pointer to the first int
 * @b: pointer to the second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
