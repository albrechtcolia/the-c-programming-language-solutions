
#include <stdio.h>

/**
 * Exercise 1-12
 * Write a program that prints its input one word per line.
 */

int main (int argc, char *argv[])
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n')
            putchar(c);

        else
            putchar('\n');
    }

    return 0;
}

