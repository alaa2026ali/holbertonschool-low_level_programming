#include "main.h"

/**
 * _strspn - Gets the length 
 * @s: The string to be searched.
 * @accept: The string containing
 *
 * Return: The number
 * which consist =
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
