#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: a pointer to the character
 */

char *_strchr(char *s, int c) 
{
    while (*s != (char)c)
    {
        if (!*s++)
	{
            return 0;
	}
    }
    return (char *)s;
}

