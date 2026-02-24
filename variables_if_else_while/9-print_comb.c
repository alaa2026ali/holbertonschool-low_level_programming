#include <stdio.h>

/**
 * main - prints single digit numbers separated by comma and space
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');   /* print number */

        if (i != 9)         /* if not the last number */
        {
            putchar(',');   /* print comma */
            putchar(' ');   /* print space */
        }
    }

    putchar('\n');          /* new line at the end */

    return (0);
}
