#include "main.h"
#include <ctype.h>
/**
  * main - Write a program that adds positive numbers.
  * Print the result, followed by a new line
  * If no number is passed to the program, print 0, followed by a new line
  * If one of the number contains symbols that are not digits, print Error,
  * followed by a new line, and return 1
  * You can assume that numbers and the addition of all the
  * numbers can be stored in an int
  * @argc: arg count
  * @argv: arg variables
  * Return: 0 (success)
  */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int zero;

	i = 0;
	zero = 0;
	sum = 0;
	if (argc < 1)
	{
		printf("%d", zero);
		putchar('\n');
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
