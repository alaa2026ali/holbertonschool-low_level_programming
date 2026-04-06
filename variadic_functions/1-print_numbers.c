#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 * 
 * Description: If separator is NULL, it is not printed.
 *              A new line is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args; /* list to store variable arguments */
    unsigned int i;

    va_start(args, n); /* initialize args to get the numbers after n */

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int)); /* get the next integer and print it */

        /* print separator if it's not NULL and not the last number */
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    va_end(args); /* clean up the list */
    printf("\n"); /* print a new line at the end */
}
