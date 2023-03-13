#include <stdio.h>

/**
 * main - prints all command line arguments it recieves
 * @argc: number of command line arguments
 * @argv: an aray of the number of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
