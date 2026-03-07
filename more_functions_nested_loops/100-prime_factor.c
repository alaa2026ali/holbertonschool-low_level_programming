#include <stdio.h>

int main(void)
{
unsigned long n = 612852475143;
unsigned long factor = 2;
unsigned long largest = 0;

while (factor * factor <= n)
{
if (n % factor == 0)
{
largest = factor;
n /= factor;
}
else
{
factor++;
}
}

if (n > largest)
largest = n;

printf("%lu\n", largest);

return (0);
}
