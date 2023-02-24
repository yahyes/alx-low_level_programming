#include "main.h"

/**
 * print_line - function definition
 * Description: print dashes as many as n times
 * @n - number of dashes to print
 * Return: void
 */

void print_line(int n);

/**
 * print_line - function definition
 * Description: print dashes n times
 * @n: number of dashes to print
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
