#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, separated by comma and space
 *
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, f_next;
	unsigned long f1_hi = 0, f2_hi = 0, f_next_hi;
	unsigned long limit = 1000000000; /* 1e9 for splitting numbers */
	int i;

	printf("%lu, %lu", f1, f2);

	for (i = 3; i <= 98; i++)
	{
		/* add low parts */
		f_next = f1 + f2;
		f_next_hi = f1_hi + f2_hi;

		/* handle overflow from low part */
		if (f_next >= limit)
		{
			f_next -= limit;
			f_next_hi += 1;
		}

		/* print numbers with formatting */
		if (f_next_hi == 0)
			printf(", %lu", f_next);
		else
			printf(", %lu%09lu", f_next_hi, f_next);

		/* update previous numbers */
		f1 = f2;
		f1_hi = f2_hi;
		f2 = f_next;
		f2_hi = f_next_hi;
	}
	printf("\n");
	return (0);
}
