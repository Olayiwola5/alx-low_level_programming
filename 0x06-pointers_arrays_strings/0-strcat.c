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

	i = 0;
	len = 0;
	/* getting the length of src */
	while (src[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
