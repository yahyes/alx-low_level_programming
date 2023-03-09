#include "main.h"

/**
 * my_sqrt - returns the natural square root of a number.
 * @num: the number
 * @root: the root
 * Return: -1 or the square root
 */

int my_sqrt(int num, int root);

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number
 * Return: -1 or the square root
 */

int _sqrt_recursion(int n);

/**
 * my_sqrt - returns the natural square root of a number
 * @num: the number to find the square root of
 * @root: the root
 * Return: the square root or -1
 */

int my_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		return (my_sqrt(num, root + 1));
	}
}

int _sqrt_recursion(int n)
{
	int the_root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (my_sqrt(n, the_root));
	}
}
