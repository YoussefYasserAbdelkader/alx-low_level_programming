#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
if (n < 0)
n = -n;
else
n = n;
int x = n % 10;
if (x < 0)
x = -x;
putchar(x + 48);
}
