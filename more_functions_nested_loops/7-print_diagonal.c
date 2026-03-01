#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print '\'
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i = 0, j;

while (i < n)  
{
 = 0;
while (j < i) 
{
_putchar(' ');
j++;
}

_putchar('\\');
_putchar('\n');
i++;
}

if (n <= 0)  
_putchar('\n');
}
