#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to result or 0 if result can't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, k, carry = 0, sum, len1 = 0, len2 = 0;

	while (n1[len1])
		len1++;

	while (n2[len2])
		len2++;

	k = size_r - 1;
	r[k] = '\0';
	k--;

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		if (k < 0)
			return (0);

		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';

		if (len2 >= 0)
			sum += n2[len2--] - '0';

		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	k++;

	i = 0;
	while (r[k])
		r[i++] = r[k++];

	return (r);
}
