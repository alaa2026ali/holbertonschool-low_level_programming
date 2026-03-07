#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer 10 bytes per line
 * @b: pointer to the buffer
 * @size: number of bytes to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* print position */
		printf("%08x: ", i);

		/* print hex values */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2)
				printf(" "); /* space after every 2 bytes */
		}

		/* print characters */
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (isprint((unsigned char)b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
