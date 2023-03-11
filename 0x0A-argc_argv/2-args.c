#include <stdio.h>
/**
 * main - prints all args on a seperate line including the first one
 *
 * @argc: array index for argv
 * @argv: an array of pointers
 *
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
