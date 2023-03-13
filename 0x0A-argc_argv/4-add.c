#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: an array of the number of arguments in a command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;
	int num;
	int arg_index;
	int char_index;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
		{
			if (!isdigit(argv[arg_index][char_index]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[arg_index]);
		if (num < 0)
		{
			printf("Error\n");
			return (0);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}

