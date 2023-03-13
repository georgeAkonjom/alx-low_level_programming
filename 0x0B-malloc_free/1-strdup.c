#include "main.h"
/**
 * _strdup - dupes a string
 * @str: string to be duped
 * Return: pointer to the duped string
 */
char *_strdup(char *str)
{
	int i, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[n] < '\0')
		n++;

	s = malloc(n * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}
