#include <stdio.h>      // For printf
#include <stdarg.h>     // For variadic functions (va_list, va_start, va_arg, va_end)

/**
 * print_strings - prints strings separated by a given separator
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Description:
 * This function prints n strings passed as arguments.
 * Each string is separated by the given separator.
 * If separator is NULL, it is not printed.
 * If a string is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;        // Declare a variable to handle the variadic arguments
    unsigned int i;      // Loop counter
    char *str;           // Pointer to hold each string

    va_start(args, n);   // Initialize args to retrieve arguments after 'n'

    // Loop through all the strings
    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);   // Get the next argument (string)

        // Check if the string is NULL
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);        // Print the string

        // Print separator if it's not NULL and not the last element
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args);        // Clean up the variadic arguments

    printf("\n");        // Print a new line at the end
}
