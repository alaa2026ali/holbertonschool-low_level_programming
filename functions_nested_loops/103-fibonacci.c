#include <stdio.h>

/**
 * main - calculates and prints the sum of even Fibonacci numbers
 *        not exceeding 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	unsigned long sum = 2; /* start with first even number */

	while (1)
	{
		next = first + second;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
