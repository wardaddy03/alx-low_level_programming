#include "main.h"

/**
 * _strpbrk - function searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: s string
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
