
#include <stdio.h>

/**
 * Exercise 1-09
 * Write a program to copy its input to its output replacing
 * each string of one or more blanks by a single blank.
 */

int main (int argc, char *argv[])
{
    int character, previous_character;

    while ((character = getchar()) != EOF) {
        if (character != ' ' || previous_character != ' ')
            putchar(character);

        previous_character = character;
    }

    return 0;
}


