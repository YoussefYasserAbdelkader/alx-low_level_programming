#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
-putchar(i);
-putchar('\n');
}
}
int main(void)
{
print_alphabet();
}
}
