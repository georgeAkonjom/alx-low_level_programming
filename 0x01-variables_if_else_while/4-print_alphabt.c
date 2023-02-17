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
	if (x == 'q' || x == 'e')
		x++;
	else 
	{
		putchar(x);
	}
}
        putchar('\n');
        return (0);
}
