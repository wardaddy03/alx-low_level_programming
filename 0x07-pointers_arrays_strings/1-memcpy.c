#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes 
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
