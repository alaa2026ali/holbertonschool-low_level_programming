#include <stdio.h>
#include <stdarg.h>

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
va_list args;
int i = 0;
char *str;
char *sep = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
sep = ", ";
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
sep = ", ";
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
sep = ", ";
break;
default:
break;
}
i++;
}
va_end(args);
printf("\n");
}
