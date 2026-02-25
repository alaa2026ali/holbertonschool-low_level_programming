#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++) /* outer loop: 10 lines */
	{
		for (letter = 'a'; letter <= 'z'; letter++) /* inner loop: print a-z */
			_putchar(letter);

		_putchar('\n'); /* new line after each alphabet */
	}
}
