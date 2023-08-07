#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concstrtenstrte two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	//for (i = 0; s1[i] != '\0'; i++)
	//	;
	//for (j = 0; s2[j] != '\0'; j++)
	//	;

	str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (str == NULL)
		return (NULL);
	/*
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			str[c] = s1[c];
		else
			str[c] = s2[d++];
	} */
	strcpy(s1, s2);
	strcpy(str, s1);
	return (str);
}
