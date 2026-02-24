#include <stdio.h>

/**
 * main - print numbers from 0 to 99 in two digits
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 0; i <= 99; i++)
    {
        putchar((i / 10) + '0');  /* خانة العشرات */
        putchar((i % 10) + '0');  /* خانة الآحاد */
        if (i != 99)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');

    return (0);
}
