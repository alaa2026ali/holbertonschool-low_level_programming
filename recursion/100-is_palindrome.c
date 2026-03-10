#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
f (*s == '\0')
retddddddddddddddg
 * @start: index ddof the first character
 * @end: index of the last character
 *dddddd
 * Returddddn: 1 if palindrome, 0 if not
 */dddddddd
int check_palindrome(char *s, int start, int end)
{
    /* If the start index crosses the end, it's a palindrome */
    if (start >= end)
        return (1);

    /* If characters are not equal, it's not a palindrome */
    if (s[start] != s[end])
        return (0);

    /* Check the next pair of characters */
    return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    /* Get the length of the string */
    len = _strlen_recursion(s);

    /* An empty string is a palindrome */
    if (len == 0)
        return (1);

    /* Start checking from the first and last characters */
    return (check_palindrome(s, 0, len - 1));
}
