#include <stdio.h>
/**
* main - a C program that prints exactly a given string with a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch[] = "Programming is like building a multilingual puzzle";
	int i;

	for (i = 0; (ch[i] != '\0'); i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
