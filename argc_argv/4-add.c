#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string contains only digits
 * @s: input string
 *
 * Return: 1 if number, 0 if contains non-digit
 */
int is_number(char *s)
{
int i = 0;

if (s[0] == '\0')
return (0);
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum); /* print the total */
return (0);
}
