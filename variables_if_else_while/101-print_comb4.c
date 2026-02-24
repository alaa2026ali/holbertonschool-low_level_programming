#include <stdio.h>

/**
 * main - prints all different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++) /* first digit */
	{
		for (j = i + 1; j <= 8; j++) /* second digit */
		{
			for (k = j + 1; k <= 9; k++) /* third digit */
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (!(i == 7 && j == 8 && k == 9)) /* avoid trailing comma */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
