#include "main.h"

/**
 * print_number - prints a number with proper spacing
 * @n: number to print
 * @col: current column
 */
void print_number(int n, int col)
{
	if (col != 0)
	{
		_putchar(',');
		_putchar(' ');

		if (n < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (n < 100)
			_putchar(' ');
	}

	if (n >= 100)
		_putchar((n / 100) + '0');
	if (n >= 10)
		_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table
 * @n: number of times table
 */
void print_times_table(int n)
{
	int row, col, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			result = row * col;
			print_number(result, col);
		}
		_putchar('\n');
	}
}
