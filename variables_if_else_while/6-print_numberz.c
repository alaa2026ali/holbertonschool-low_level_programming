#include <stdio.h>

/**
 * main - prints all single digit numbers from 0 to 9
 *        followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0'); /* convert number to ASCII and print */
	putchar('\n');       /* print new line after numbers */
	return (0);
}
