#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to print
 *
 * You cannot use arrays, pointers, long, or printf.
 */
void print_number(int n)
{
	int divisor = 1;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* handle zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar('0' + n / divisor);
		n = n % divisor;
		divisor /= 10;
	}
}
