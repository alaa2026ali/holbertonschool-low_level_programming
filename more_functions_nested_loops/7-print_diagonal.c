#include "main.h"

void print_diagonal(int n)
{
int i = 0, j;

while (i < n)  // loop for each line
{
 = 0;
hile (j < i)  // print spaces
{
_putchar(' ');
j++;
}

_putchar('\\');
_putchar('\n');
i++;
}

if (n <= 0)  // if n is 0 or negative
putchar('\n');
}
