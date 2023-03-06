#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest.
 *
 *
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest == NULL) return NULL;
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (int i = 0; i < n; i++)
		char_dest[i] = char_src[i];

	return dest;
}
