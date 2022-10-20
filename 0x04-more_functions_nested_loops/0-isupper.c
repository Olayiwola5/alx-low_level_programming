#include "main.h"
/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: 0 on success
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
