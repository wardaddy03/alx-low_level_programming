#include <stdio.h>

/**
 * main - print hexadecimals in lower case
 *
 * Return: 0;
 */

int main(void)
{
        char c = '1';
        char n = 'A';

        while (c <= '9')
        {
                putchar(c);
                c++;
        }
        while (n <= 'G')
        {
                putchar(n);
                n++;
        }
        putchar('\n');

        return (0);
}
