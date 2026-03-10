#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments including program name
 * @argv: array of argument strings (unused)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
