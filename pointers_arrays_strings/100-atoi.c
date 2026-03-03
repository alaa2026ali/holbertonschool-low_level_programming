#include "main.h"
#include <limits.h> 

/**
 * _atoi - converts a string to an integer safely
 * @s: pointer to string
 *
 * Return: integer value of string, capped at INT_MAX/INT_MIN if overflow
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
		{
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (sign == 1)
		{
			if (num > (INT_MAX - (*s - '0')) / 10)
				return (INT_MAX);
		}
		else /* sign == -1 */
		{
			if (num > (-(INT_MIN + (*s - '0'))) / 10)
				return (INT_MIN);
		}

		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}
