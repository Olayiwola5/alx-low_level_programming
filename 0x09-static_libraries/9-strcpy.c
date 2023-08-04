#include "main.h"
/**
 * _strcpy - Write a function that copies the string pointed to by src,
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest.
  * Return value: the pointer to dest
  * @dest: char arg to copy into
  * @src: char arg to copy
  * Return: pointer to char
*/
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
