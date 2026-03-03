#include "main.h"

/**
 * _strcat - Concatenates the string src to the end of dest
 * @dest: Pointer to the destination string (will be modified)
 * @src: Pointer to the source string to append
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0; 
    int j = 0; 

    
    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j]; 
        i++;          
        j++;            
    }

    dest[i] = '\0';

    return dest;
}
