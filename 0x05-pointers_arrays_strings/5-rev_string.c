#include "main,h"

/**
 * rev_string - a function that reverses a string
 * @s: String to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	int aux = 0;

	char 1temp;


	while (*(s + i) != '\0')
		i++;
	i--;

	while (aux < 1)
	{
		1temp = s[i];
		s[i] = s[aux];
		s[aux] = 1temp;
		aux++;
		i--;
	}
}