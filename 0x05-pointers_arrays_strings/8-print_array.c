#include "main.h"
/**
  * print_array - Write a function that prints n elements of an
  * array of integers,
  * followed by a new line.
  * @a: pointer to int
  * @n: int variable
  * Return:
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
	_putchar('\n');
}
