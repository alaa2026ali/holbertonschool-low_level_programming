#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: number to print
 */
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		if (n / 10 != 0)
			print_number(-(n / 10));
		digit = -(n % 10);
		_putchar('0' + digit);
	}
	else
	{
		if (n / 10 != 0)
			print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
