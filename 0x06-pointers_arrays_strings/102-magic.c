#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

/*Assign the value 1024 to the third element of array 'a'*/
a[2] = 1024;

/*Create a pointer'p'and assign it the memory address of integer variable 'n'*/
p = &n;

/*
* Add your line of code here to set the value of 'a[2]' to 98 indirectly.
* You are not allowed to use 'a', modify 'p', or add any other code.
* Use pointer arithmetic to achieve this.
*/
*(p + 5) = 98;

/*
* Print the modified value of 'a[2]'
* Since 'a[2]' was modified indirectly through the pointer 'p',
* this will print "a[2] = 98"
*/
printf("a[2] = %d\n", a[2]);

return (0);
}

