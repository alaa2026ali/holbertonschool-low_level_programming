#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments (unused)
 * @argv: Array of argument strings (argv[0] is program name)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return 0;
}
