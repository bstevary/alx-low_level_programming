#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of commandline arguments
 * @av: array of all arguments
 * Each argument should be followed by a \n in the new string
 *
 * Return: pointer to resulting string
 * returns NULL if ac == 0 or av == NULL
 * returns NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int i, j;
	int k = 0;
	char *str;

	/* returns NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* get the total length of all strings in av */
	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);
	/* allocate space for the new string */
	str = malloc(sizeof(char) * (length + ac + 1));
	if (str == NULL)
		return (NULL);

	/* copy every character in every string in av to str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		/* Each argument should be followed by a \n in the new string */
		str[k] = '\n';
		k++;
	}

	/* terminate str */
	str[k] = '\0';
	return (str);
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
