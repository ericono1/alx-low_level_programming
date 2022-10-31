#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: the bytes
 * @n: num of bytes to be filled
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pt = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
