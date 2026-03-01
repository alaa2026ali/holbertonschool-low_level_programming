#include <stdio.h>  /* Required for printf to print numbers and words */

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else
printf("%d", i);

if (i < 100)
printf(" ");
}

printf("\n");

return (0);
}
