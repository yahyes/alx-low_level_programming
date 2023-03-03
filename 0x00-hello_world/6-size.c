#include <stdio.h>

/**
 * main - printing the size of various types
 * Description: print size of data type
 * Return: 0
 */

int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longIntSize = sizeof(long int);
	int longLongIntSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("size of a char: %d byte(s)\n", charSize);
	printf("size of an int: %d byte(s)\n", intSize)
	printf("size of a long int: %d byte(s)\n", longIntSize);
	printf("size of a long long int: %d byte(s)\n", longLongIntSize);
	printf("size of a float: %d byte(s)\n", floatSize;
	return (0);
}
