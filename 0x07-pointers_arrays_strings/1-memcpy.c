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
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
