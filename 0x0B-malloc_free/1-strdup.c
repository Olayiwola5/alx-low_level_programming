#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	for (len = 0; str[len] != '\0'; len++)
		len++;
	new_str = (char*) malloc(len * sizeof(char) + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
