#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * if NULL is passed, treat it as an empty string
 *
 * Return: to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int i;
	int j = 0;
	char *s3;

	len_s1 = (s1 == NULL) ? 0 : _strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : _strlen(s2);

	s3 = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (s3 == NULL)
		return (NULL);

	/* copy s1 contents */
	for (i = 0; i < len_s1; i++, j++)
		s3[j] = s1[i];

	/* copy s2 contents */
	for (i = 0; i < len_s2; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
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
