#include "main.h"
/**
  * swap_int - Write a function that swaps the values of two integers
  * @a: pointer argument
  * @b: pointer argument
  * Return: NULL
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
