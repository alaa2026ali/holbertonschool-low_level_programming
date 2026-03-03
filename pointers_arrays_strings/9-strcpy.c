#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
