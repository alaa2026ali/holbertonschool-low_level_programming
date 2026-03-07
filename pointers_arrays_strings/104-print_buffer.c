#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer in a formatted way
 * @b: pointer to buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* print the position */
		printf("%08x: ", i);

		/* print hexadecimal values */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}

		/* print characters */
		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			if (isprint(b[i + j]))
				_putchar(b[i + j]);
			else
				_putchar('.');
		}
		_putchar('\n');
	}
}
