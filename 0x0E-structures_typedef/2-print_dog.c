#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints struct dog
 * @d: pointer to the dog struct
 *
 * Return: if d is NULL print (nil)
 * and if d is NULL print nothing
 * and if name is NULL print name: (nil)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
