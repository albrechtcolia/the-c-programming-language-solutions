
#include <stdio.h>

/**
 * Exercise 1-06
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

int main (int argc, char *argv[])
{
    printf("Value: %d\n", getchar() != EOF);

    return 0;
}