#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concantenate two strings using malloc
 * @ac: arg count
 * @av: commandline arguments
 * Return: pointer to concat string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len;
	int i;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len = strlen(av[i]);
	}
	total_len++;
	str = malloc(total_len * sizeof(str) + 12);
	if (str == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}

