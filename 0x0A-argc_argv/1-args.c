#include <stdio.h>
/**
  * main - Write a program that prints number of arguments passed to it,
  * followed by a new line.
  * @argc: arg count
  * @argv: commandline arg(s)
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{

	(void)argv;
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
