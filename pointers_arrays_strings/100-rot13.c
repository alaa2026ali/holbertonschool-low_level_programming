#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0') 
	{
	j = 0;
	while (letters[j] != '\0')
	{
	if (s[i] == letters[j]) 
	{
	s[i] = rot13letters[j];
	break;
	}
	j++;
	}
	i++;
	}
	return (s);
}
