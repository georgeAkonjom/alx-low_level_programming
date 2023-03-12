#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples the content of argv
 *
 * @argv: should contain two integers
 * @argc: should print two
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int mul;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);

}
