#include "main.h"
/**
 * _strncat - concats two strings
 *
 * @dest: pointer to dest string
 * @src: pointer to src string 
 * @n: no idea what this does.
 *
 * Return: returns a pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{ 
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] < n)
		dest[i] = '\0';

	return (dest);


}
