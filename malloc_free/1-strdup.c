#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to new string, or NULL if str = NULL or malloc fails
 */
char *_strdup(char *str)
{
    int len = 0, i;
    char *dup;
    if (str == NULL)
    return (NULL);
    while (str[len] != '\0')
    len++;
    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
    return (NULL);
    for (i = 0; i <= len; i++)
    dup[i] = str[i];
    return dup;
}
