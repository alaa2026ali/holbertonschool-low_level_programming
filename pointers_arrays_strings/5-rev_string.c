#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * This function modifies the original string
 * by swapping characters from both ends
 * until it reaches the middle.
 */
void rev_string(char *s)
{
    int len = 0; 
    int i;        
    char temp;     

    while (s[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];            
        s[i] = s[len - 1 - i];    
        s[len - 1 - i] = temp;   
    }
}
