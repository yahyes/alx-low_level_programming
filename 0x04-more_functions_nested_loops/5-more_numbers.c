#include "main.h"

/**
 * more_numbers - function declaration
 * Description: prints 1-14, 10 times
 * Return: void
 */

void more_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: prints 1-14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int row;
	int col;

	for (row = 0; row <= 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar('1');
			}
			_putchar((col % 10) + '0');
		}
		_putchar('\n');
	}
}


