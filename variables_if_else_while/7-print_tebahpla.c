#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *        followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i); /* print each letter from z to a */
	putchar('\n');  /* print a new line after the alphabet */

	return (0);
}
