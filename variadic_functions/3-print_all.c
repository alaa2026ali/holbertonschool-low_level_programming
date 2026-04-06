#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    /* Here you add the printing logic according to the format */

    va_end(args);
}
