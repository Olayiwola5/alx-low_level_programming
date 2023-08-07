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
	total = 0;
	for (x = 0; x < ac; x++)
	{
		for (x = 0; *(*(av + x) + y) != '\0' x++)
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
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*str = av[x][y];
			str++;
		}
		*str = '\0';
		str++;
	}
	return (str2);
}
