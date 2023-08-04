#include <stdio.h>
#include <stdlib.h>
/**
  * main - Write a program that multiplies two numbers.
  * Your program should print the result of the multiplication,
  * followed by a new line
  * You can assume that the two numbers and result of the
  * multiplication can be stored in an integer
  * If the program does not receive two arguments,
  * your program should print Error,
  * followed by a new line, and return 1
  * @argc: arg count
  * @argv: commandline arg(s)
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;
	printf("%d\n", product);
	return (0);
}
