
#include <stdio.h>

/**
 * Exercise 1-19
 * Write a function reverse that reverses the character string s;
 * use it to write a program that reverses its input a line at a time.
 */

#define MAXLEN 1000

void reverse(char string[]);

int main (int argc, char *argv[])
{
    int  character, index;
    char line[MAXLEN];

    index = 0;
    while ((character = getchar()) != EOF) {
        line[index] = character;
        index++;

        if (character == '\n' || index == (MAXLEN - 1)) {
            line[index - 1] = '\0';
            reverse(line);
            index = 0;
        }
    }

    return 0;
}

void reverse(char string[]) {
    int  index, n;
    char line[MAXLEN];

    for (index = 0; string[index] != '\0' && index < MAXLEN; index++);

    if (index == 0 || string[index] == '\0')
        line[index] = '\0';

    if (index > 0)
        for (index = index - 1, n = 0; index >= 0; index--) {
            line[index] = string[n];
            n++;
        }

    printf("%s\n", line);
}


