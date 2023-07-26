#include "main.h"
/**
  * _strcat - write a function that concatenates two string
  * @dest: char pointer argument,destination
  * @src: char pointer argument,source
  * Return: char pointet
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[dest_len + i] = '\0';
	return dest;
}
