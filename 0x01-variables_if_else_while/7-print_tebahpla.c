#include <stdio.h>

/**
 * main - print alpha in reverse
 *
 * Return: 0
 */

int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');

	return (0);
}
