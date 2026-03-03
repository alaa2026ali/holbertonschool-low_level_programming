#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 */
void puts2(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		if (*(ptr + 1) != '\0')  
			ptr += 2;
		else
			ptr++;  
	}
	_putchar('\n');
}
