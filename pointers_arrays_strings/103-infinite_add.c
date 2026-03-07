#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store the result
 * @size_r: size of buffer
 *
 * Return: pointer to result string or 0 if buffer too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, i, j, k, sum, carry = 0;

    /* find lengths of n1 and n2 */
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    /* check if buffer is big enough */
    if (size_r <= (len1 > len2 ? len1 : len2))
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    /* add digits from end */
    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';
        if (k >= size_r - 1) /* check buffer overflow */
            return (0);
        r[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    r[k] = '\0';

    /* reverse the string */
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}
