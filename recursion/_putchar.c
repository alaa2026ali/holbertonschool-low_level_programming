#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a single character to stdout
 * @c: the character to print
 *
 * Return: number of characters printed (1) or -1 on failure
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
