#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @c: the char in question
 * @n: num of bytes to be filled
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; indexx++)
		memory[index] = value;
	return (memory);
}
