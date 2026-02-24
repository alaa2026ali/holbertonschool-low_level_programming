#include <stdio.h>

/**
 * main - prints all combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 98; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            /* print first number */
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            /* print second number */
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            if (!(i == 98 && j == 99)) /* لا نضع فاصلة بعد آخر رقم */
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
