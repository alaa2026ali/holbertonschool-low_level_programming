#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 2772;
	int c;

	srand(time(NULL));

	while (sum > 126)
	{
		c = (rand() % 94) + 33;
		putchar(c);
		sum -= c;
	}

	putchar(sum);
	return (0);
}
