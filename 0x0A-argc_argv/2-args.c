#include <stdio.h>
/**
  * main - Write a program that prints all arguments passed to it,
  * followed by a new line.
  * @argc: arg count
  * @argv: commandline arg(s)
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
