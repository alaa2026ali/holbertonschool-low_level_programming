#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0'); /* convert number to ASCII character */
		i++;
	}

	putchar('\n'); /* print new line at the end */
	return (0);
}
