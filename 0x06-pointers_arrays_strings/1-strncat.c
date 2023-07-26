#include "main.h"
/**
  * _strncat - Write a function that concatenates two strings.
  * @n: int number for size
  * @dest: char pointer to store string
  * @src: char pointer string to join to dest
  * Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
