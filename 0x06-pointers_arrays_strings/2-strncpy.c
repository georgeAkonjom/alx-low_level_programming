#include "main.h"
/**
 * _strncpy - copies st most n bytes of a string
 *
 * @dest: destination (paste here)
 * @src: source (copy here)
 * @n: how much of source to paste
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
