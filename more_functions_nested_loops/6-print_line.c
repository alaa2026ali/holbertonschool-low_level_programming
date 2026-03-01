#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to print '_'
 *
 * Return: void
 */
void print_line(int n)
{
    int i;

    /* Loop from 0 to n - 1 */
    for (i = 0; i < n; i++)
    {
        if (n > 0)  /* Optional check, the loop won't run if n <= 0 */
            _putchar('_');
    }

    /* Print newline at the end */
    _putchar('\n');
}
