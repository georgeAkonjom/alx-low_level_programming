#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	print_alphabet();
	{
		        int x;

        for (x = 'a'; x <= 'z'; x++)
{
        if (x == 'q' || x == 'e')
                continue;
        else
               _ putchar(x);
}
        _putchar('\n');
	}
	return (0);
}
