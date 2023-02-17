#include <stdio.h>
/**
 * main - printing the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
return (0);
}