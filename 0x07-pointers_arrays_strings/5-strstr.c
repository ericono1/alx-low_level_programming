#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack : the string to search
 * @needle: the str to find
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
