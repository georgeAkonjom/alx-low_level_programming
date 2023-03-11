#include <stdio.h>
/**
 * main - prints argc ie no of args.
 *
 * @argc: no of args in argv
 * @argv: array of pointers
 *
 * Return: always 0;
 *
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, v;

	while (i < argc)
	{
		v = i;
		i++;
	}
	printf("%d\n", v);
	return (0);
}
