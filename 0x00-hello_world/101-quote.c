#include <stdio.h>
/**
 * main - prints exactly "and that piece of art is useful"
 * Return: 1 (Always success)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
