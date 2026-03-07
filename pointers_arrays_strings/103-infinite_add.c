#include "main.h"

/**
 * reverse_str - reverses a string in place
 * @s: string to reverse
 * @len: length of the string
 */
void reverse_str(char *s, int len)
{
	int i, j;
	char tmp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if it doesn't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, k = 0, carry = 0, sum;
	char *p1 = n1, *p2 = n2;

	/* find lengths */
	while (*p1++)
		len1++;
	while (*p2++)
		len2++;

	/* add digits from end to start */
	while (len1 > 0 || len2 > 0 || carry)
	{
		sum = carry;
		if (len1 > 0)
			sum += n1[--len1] - '0';
		if (len2 > 0)
			sum += n2[--len2] - '0';

		if (k >= size_r - 1)
			return (0);

		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}

	r[k] = '\0';
	reverse_str(r, k);

	return (r);
}
