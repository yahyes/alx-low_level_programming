#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n - number of times
 *
 * Return: void
 */

int print_line(void)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
