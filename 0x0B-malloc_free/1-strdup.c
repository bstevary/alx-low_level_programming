#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - creates a duplicate of the given string
 * @str: string to be duplicated
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 * Otherwise return NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len_str;
	int i;

	if (str == NULL)
		return (NULL);

	len_str = _strlen(str);
	dup_str = malloc(sizeof(char) * (len_str + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
		dup_str[i] = str[i];

	dup_str[len_str] = '\0';

	return (dup_str);
}

/**
 * _strlen - finds the length of a string
 * @s: address of first character in the string
 *
 * Return: length og the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
