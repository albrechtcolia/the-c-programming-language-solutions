
#include <stdio.h>

/**
 * Exercise 1-10
 * Write a program to copy its input to its output,
 * replacing each tab by \t , each backspace by \b ,
 * and each backslash by \\ . This makes tabs and
 * backspaces visible in an unambiguous way.
 */

int main (int argc, char *argv[])
{
    int character;

    while ((character = getchar()) != EOF) {
        if (character == '\t') {
            putchar('\\');
            putchar('t');
        }
        
        else if (character == '\b') {
            putchar('\\');
            putchar('b');
        }

        else if (character == '\\') {
            putchar('\\');
            putchar('\\');
        }

        else
            putchar(character);
    }

    return 0;
}


