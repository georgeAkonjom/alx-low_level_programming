#include "main.h"
/**
 * _strdup - dupes a string
 * @str: string to be duped
 * Return: pointer to the duped string
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}
