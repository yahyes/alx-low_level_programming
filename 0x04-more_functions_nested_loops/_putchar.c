#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: On success 1, and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
