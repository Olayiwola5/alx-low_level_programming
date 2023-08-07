#include "main.h"
#include <string.h>
/**
  * _strdup - Write a function that returns a pointer to a newly
  * allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: char string
  * Return: pointer to char
  */
char _freeme(char *s);
char *_strdup(char *str)
{
	char *new_str;
	int i, len;
	char *p;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = (char *) malloc(len * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	strcpy(p, new_str);
	*(p + i) = '\0';

	return (p);
}
