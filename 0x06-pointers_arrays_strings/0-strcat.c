#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 * null byte,to  the end of the string pointed to by @dest.
 * @dest:  pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.*
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int indx = 0, dest_len = 0;

	while (dest[indx++])
		dest_len++;
	for (indx = 0; src[indx]; indx++)
		dest[dest_len++] = src[indx];

	return (dest);
}
