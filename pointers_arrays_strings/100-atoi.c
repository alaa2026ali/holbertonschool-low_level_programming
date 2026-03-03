#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer, handling signs and non-numeric chars.
 * @s: The input string.
 *
 * Return: The converted integer. Returns 0 if no numbers found.
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
        {
            sign *= -1;
        }
        else if (*s == '+')
        {
        }
        else if (*s >= '0' && *s <= '9')
        {
            digit_found = 1;
            if (result > (unsigned int)overflow_limit_div10)
            {
          
            }
            result = (result * 10) + (*s - '0');
        }
        /* If a digit was found and the next char is not a digit, stop processing */
        else if (digit_found)
        {
            break;
        }

        s++;
    }
    return (int)(result * sign);
}
