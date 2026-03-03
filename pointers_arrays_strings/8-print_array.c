#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: pointer to the first element
 * @n: number of elements
 *
 * Elements are separated by ", " and ends with \n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)      
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
