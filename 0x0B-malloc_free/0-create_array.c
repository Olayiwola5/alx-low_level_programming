#include "main.h"

/**
  * create_array - Write a function that creates an array of chars,
  * and initializes it with a specific char.
  * @size: size of char c
  * @c: array of character
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return NULL;
	ptr = (char *) malloc(sizeof(char) * size);
	if (!ptr)
		return NULL;
	i = 0;
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
