#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argostostr - concantenate two strings using malloc
 * @ac: arg count
 * @av: commandline arguments
 * Return: pointer to concat string
 */
char *argstostr(int ac, char **av)
{
	char **str;
	int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (len = 0; av[len] != '\0'; len++)
		;

	str = malloc(len * sizeof(**av) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = av[i];
	}
	str[i] = '\0';
	return (str);
}
