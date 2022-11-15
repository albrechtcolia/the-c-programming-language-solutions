
#include <stdio.h>
#include <stdlib.h>

/**
 * Exercise 1-14
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */

#define RANGE 94

int main (int argc, char *argv[])
{
    int  char_frequency[RANGE];
    int  maxlen = 0;
    char c;

    for (int i = 0; i < RANGE; i++)
        char_frequency[i] = 0;

    printf("Input data (CTRL + D, stop input)\n");
    printf("---------------------------------\n");

    while ((c = getchar()) != EOF) {
        if (c >= 33 && c <= 126) {
            ++char_frequency[c-33];

            if (char_frequency[c-33] >= maxlen)
                maxlen = char_frequency[c-33];
        }
    }

    printf("\nVertical histogram\n");
    printf("---------------------------------\n\n");

    for (int i = maxlen; i > 0; i--) {
        printf("%3d | ", i);

        for (int j = 0; j < RANGE; j++) {
            if (char_frequency[j] >= i)
                printf("*");
            else 
                printf(" ");
        }

        printf("\n");
    }

    printf("    +");

    for (int line = 0; line <= RANGE; line++)
        printf("-");

    printf("\n      ");

    for (int n = 0; n < RANGE; n++)
        printf("%c", n+33);

    printf("\n");

    return 0;
}


