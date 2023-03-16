#include "main.h"
/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes of the second string yada yada
 * Return: pointer to a new space holding bith strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, v = 0, a, b;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[v] != '\0')
		v++;

	if (n >= v)
		n = v;

	concat = (char *) malloc((sizeof(char) * (i + n + 1)));

	if (concat == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		concat[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		concat[a] = s2[b];
		a++;
	}

	concat[a] = '\0';

	return (concat);
}
