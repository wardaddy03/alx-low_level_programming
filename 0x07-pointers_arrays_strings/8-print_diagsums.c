#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * of integers.
 * @a: array
 * @size: size of an array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int v = 0, u = 0;

	for (i = 0; i < size; i++)
	{
		u = u + *(a + i * size + i);
		v = v + *(a + i * size - i);
	}

	printf("%ld, %ld\n", u, v);
}
