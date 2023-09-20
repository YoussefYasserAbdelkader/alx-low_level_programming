#include <stdio.h>

int main(void)
{
    // Define a character array with a string
    char a[] = "A dream doesn't become reality through magic; it takes sweat, determination and hard work";

    // Define a pointer to a character and initialize it to point to the beginning of the string 'a'
    char *p = a;

    // Print the original string stored in 'a'
    printf("%s\n", a);

    // Add one line of code to modify 'a' indirectly without using 'a' or modifying 'p'
    // This line modifies the 6th element of the array pointed to by 'p' to be 98 (ASCII value for 'b')
    *(p + 5) = 98;

    // Print the modified string stored in 'a' (now "A dream doesn't become reality through magic; it takes sweat, determination and hard work")
    printf("%s\n", a);

    return (0);
}

