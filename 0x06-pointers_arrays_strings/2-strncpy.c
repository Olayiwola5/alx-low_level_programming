#include "main.h"
/**
  * _strncpy - Write a function that copies a string.
  * @dest: char pointer,destination string
  * @src: char pointer,destination string
  * @n: int n for size
  * Return:
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest)
}
