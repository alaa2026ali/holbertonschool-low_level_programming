#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *        followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;

	/* print numbers 0-9 */
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	/* print letters a-f */
	for (i = 0; i < 6; i++)
		putchar(i + 'a');

	putchar('\n'); /* print a new line after hexadecimal digits */

	return (0);
}
