#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - returns the natural square root of a number
 * @num: number to calculate the square root of
 * @root: the root to be tested
 * Return: the resulting square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}

