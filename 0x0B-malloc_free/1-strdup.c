#include "main.h"
/**
  * _strdup - Write a function that returns a pointer to a newly 
  * allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: char string
  * Return: pointer to char
  */
char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (!str)
		return (NULL);
	while(str[i] != '\0')
		len++;
	new_str = (char) malloc(len * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return str;
}
