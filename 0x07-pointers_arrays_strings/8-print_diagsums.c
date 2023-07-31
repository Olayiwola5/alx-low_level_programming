#include "main.h"

/**
 * print_diagsums -  prints sums of square array diagonal
 *
 * @a: a pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_diagonal1 = *a;
	int sum_diagonal2 = 0;

	for (i = 1; i <= size ; ++i)
	{
		if (i != size)
			sum_diagonal1 += *(a + (i * size) + i);

		sum_diagonal2 += *(a + (size - 1) * i);
	}

	printf("%d, ", sum_diagonal1);
	printf("%d\n", sum_diagonal2);
}
