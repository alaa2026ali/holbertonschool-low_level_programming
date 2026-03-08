#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in
 *         the initial segment of s
 *         which consist only of bytes
 *         from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;
    int found;

    while (*s)
    {
        found = 0;
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        count++;
        s++;
    }
    return (count);
}
