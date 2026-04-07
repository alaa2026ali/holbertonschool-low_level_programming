#include <stdio.h>      // For printf
#include <stdarg.h>     // For variadic functions (va_list, va_start, va_arg, va_end)

/**
 * print_all - prints any type of data based on a format string
 * @format: a string representing the types of arguments:
 *          c = char
 *          i = integer
 *          f = float
 *          s = string
 *
 * Description:
 * This function can print characters, integers, floats, and strings.
 * Unknown format characters are ignored.
 * NULL strings are replaced with "(nil)".
 * Arguments are separated by ", ".
 */
void print_all(const char * const format, ...)
{
    va_list args;       // Variable to store the variadic arguments
    int i = 0;          // Index for iterating through the format string
    char *str;          // Temporary pointer to store string arguments
    char *sep = "";     // Separator: empty for the first element

    va_start(args, format);   // Initialize the va_list to retrieve arguments

    // Loop through each character in the format string
    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':   // Character
                printf("%s%c", sep, va_arg(args, int)); // char promoted to int
                sep = ", ";  // Update separator after first element
                break;

            case 'i':   // Integer
                printf("%s%d", sep, va_arg(args, int));
                sep = ", ";
                break;

            case 'f':   // Float
                printf("%s%f", sep, va_arg(args, double)); // float promoted to double
                sep = ", ";
                break;

            case 's':   // String
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";  // Replace NULL with (nil)
                printf("%s%s", sep, str);
                sep = ", ";
                break;

            default:    // Ignore unknown format characters
                break;
        }
        i++; // Move to the next character in format
    }

    va_end(args);   // Clean up the va_list
    printf("\n");   // Print newline at the end
}
