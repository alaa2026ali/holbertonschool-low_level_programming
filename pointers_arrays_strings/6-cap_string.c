#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;

if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 'a' + 'A';

while (s[i] != '\0')
{
if ((s[i] >= 'a' && s[i] <= 'z') &&
(s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}'))
{
s[i] = s[i] - 'a' + 'A';
}
i++;
}

return (s);
}
