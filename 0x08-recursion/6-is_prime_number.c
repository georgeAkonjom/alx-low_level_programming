#include "main.h"
/**
 * is_prime_number - checks if input is a prime number
 *
 * @n: input. an int. 
 *
 * Return: an int.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n % i == 0 && n != i)
		return (0);
	if (n == i)
		return (1);
	i++;
	return is_prime_number(n);
}
