#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    char *a;

    while (*s != '\0')
    {
        found = 0;
        a = accept;

        while (*a != '\0')
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
            a++;
        }

        if (found)
        {
            count++;
            s++;
        }
        else
        {
            break;
        }
    }

    return count;
}
