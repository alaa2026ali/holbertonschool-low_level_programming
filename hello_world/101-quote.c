#include <unistd.h>

/**
 * main - prints a quote to stderr
 *
 * Return: 1
 */
int main(void)
{
	char *quote;

	quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, quote, 59);
	return (1);
}
