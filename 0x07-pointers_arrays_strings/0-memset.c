#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory area
 * pointed to by s with constant byte b
 * @s: pointer to char memory
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: Char s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
