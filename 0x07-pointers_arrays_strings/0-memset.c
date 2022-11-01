#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: the bytes
 * @n: num of bytes to be filled
 *
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
