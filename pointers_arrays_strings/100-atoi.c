#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer safely
 * @s: pointer to string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int digit_found = 0;
	int overflow_limit_div10 = 214748364;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			;
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			result = (result * 10) + (*s - '0');
		}
		else if (digit_found)
			break;
		s++;
	}
	return (int)(result * sign);
}
