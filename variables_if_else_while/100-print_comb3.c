#include <stdio.h>

/**
 * main - Prints all unique combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)        /* first digit */
	{
		for (j = i + 1; j <= 9; j++)  /* second digit */
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
