#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is a description
 *
 * Return: Description of the returned value
 */

int main(void)
{
        int x;

        for (x = 'a'; x <= 'z'; x++)
{
                putchar(x);
}
        for (x = 'A'; x <= 'Z'; x++)
{
                putchar(x);
}
        putchar('\n');
        return (0);
}
