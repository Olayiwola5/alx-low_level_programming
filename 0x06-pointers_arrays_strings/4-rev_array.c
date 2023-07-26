#include "main.h"
/**
  * reverse_array - Write a function that reverses the content of
  * an array of integers
  * @a: an int array
  * @n: size of array
  * Return:
*/
void reverse_array(int *a, int n)
{
	int x; /* start */
	int tmp;
	int y; /* end */

	y = n - 1;
	for (x = 0; y > x; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		y--;
	}
}
