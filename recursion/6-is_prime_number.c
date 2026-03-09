#include "main.h"

/**
 * _is_prime_helper - checks recursively if n is divisible by i
 * @n: the number to check
 * @i: current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, else 0
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_is_prime_helper(n, 2));
}
