#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: number to print
 */
 for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
print_string("FizzBuzz");
else if (i % 3 == 0)
print_string("Fizz");
else if (i % 5 == 0)
print_string("Buzz");
else
print_number(i);

if (i < 100)
_putchar(' ');
}

_putchar('\n');

return (0);
}
