#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - If we list all the natural numbers below 10 
  * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
  * The sum of these multiples is 23. Write a program that computes and 
  * prints the sum of all the multiples of 3 or 5 below 1024 (excluded),
  * followed by a new line
  *
  * Return: 0 (success)
*/
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
