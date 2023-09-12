#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Check if a number is positive, negative, or zero
 * @n: The number to check
 *
 * Description: This function checks whether a given integer is positive,
 * negative, or zero and prints the result.
 */
void positive_or_negative(int n)
{
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}

/**
 * main - Test function for positive_or_negative
 * Return: 0
 */
int main(void)
{
int i;
i = 98 % 2;
positive_or_negative(i);
return (0);
}

