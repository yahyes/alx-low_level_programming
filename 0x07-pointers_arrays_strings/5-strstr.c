#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to search for
 * @needle: the substring to be located
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not located
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}

	return ('\0');

}
