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
	char *str;
	char *str2;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; total = 0; i < ac; i++)
	{
		for (x = 0; *(*(av + x) + y) != '\0')
		{
			;
		}
		total++;
	}
	total++;
	str = malloc(total * sizeof(str) + 1);
	if (!str)
		return (NULL);
	str2 = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\0';
		str++;
	}
	return (str);
}
