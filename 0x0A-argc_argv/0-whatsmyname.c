#include <stdio.h>
/**
  * main - Write a program that prints its name, followed by a new line.
  * If you rename the program, it will print the new name,
  * without having to compile it again
  * You should not remove the path before the name of the program
  * @argc: arg count
  * @argv: commandline arg(s)
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	i = 0;
	printf("%s", argv[i]);
	putchar('\n');
	return (0);
}
