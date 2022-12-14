
#include <stdio.h>

/**
 * Exercise 1-08
 * Write a program to count blanks, tabs, and newlines.
 */

int main (int argc, char *argv[])
{
    int character;
    int blanks = 0, tabs = 0, newlines = 0;

    while ((character = getchar()) != EOF) {
        if (character == ' ')
            blanks++;
        if (character == '\t')
            tabs++;
        if (character == '\n')
            newlines++;
    }

    printf("---------------------------\n");
    printf("Total blanks:\t%d\n", blanks);
    printf("Total tabs:\t%d\n", tabs);
    printf("Total newlines:\t%d\n", newlines);

    return 0;
}


