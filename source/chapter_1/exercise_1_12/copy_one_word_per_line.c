
#include <stdio.h>

/**
 * Exercise 1-12
 * Write a program that prints its input one word per line.
 */

int main (int argc, char *argv[])
{
    int c, prev;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (prev != ' ' && prev != '\t' && prev != '\n')
                putchar('\n');
        }
        else
            putchar(c);

        prev = c;
    }

    return 0;
}


