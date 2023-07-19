#include "main.h"
/**
  * main - Entry point
  *
  * written by Olayiwola
  *
  * Description - Write a function that prints all natural numbers from n to 98, followed by a new line.
  *
  * Return: 0 (success)
*/
void print_to_98(int n)
{
	int count;


	if (n > 98)
	{
		for ( count = n; count> 98; --count)
		{
			printf("%d ", count);
		}
	else
	{
		for (count = n; count < 98; ++count)
		{				
			printf("%d ", count);
		}
	}
	printf("98\n");
	
}
