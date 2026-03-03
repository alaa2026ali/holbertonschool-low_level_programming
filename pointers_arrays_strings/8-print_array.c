#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the first element
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0)

	printf("\n");
}
