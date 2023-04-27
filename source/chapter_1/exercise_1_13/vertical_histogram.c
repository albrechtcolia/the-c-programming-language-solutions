
#include <stdio.h>
#include <stdlib.h>

/**
 * Exercise 1-13
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */

/**
 * Vertical version.
 */

#define MAX_WORDS 10

int main (int argc, char *argv[])
{
    char c, prev = ' ';
    int  wl[MAX_WORDS];
    int  index, maxlen;
    index = maxlen = 0;

    for (int i = 0; i < MAX_WORDS; i++)
        wl[i] = 0;

    printf("Input data (CTRL + D, stop input)\n");
    printf("---------------------------------\n");

    while ((c = getchar()) != EOF) {
        if (c >= 0 && c <= 127) {
            if (c == ' ' || c == '\t' || c == '\n') {
                if (prev != ' ' && prev != '\t' && prev != '\n') {
                    index++;

                    if (index == MAX_WORDS) {
                        printf("\nNo more than %d words is allowed.\n", MAX_WORDS);
                        printf("---------------------------------\n");

                        break;
                    }

                    if (wl[index-1] > maxlen)
                        maxlen = wl[index-1];
                }
            }
            else
                wl[index]++;

            prev = c;
        }
        else {
            printf("\nUnknown characters.\n");
            exit(-1);
        }
    }

    printf("\nVertical histogram\n");
    printf("---------------------------------\n\n");

    for (int i = maxlen; i > 0; i--) {
        printf("%3d |   ", i);

        for (int j = 0; j < index; j++) {
            if (wl[j] >= i)
                printf("*   ");
            else
                printf("    ");
        }

        printf("\n");
    }

    printf("    +");
    for (int separator = 0; separator < index; separator++)
        printf("----");

    printf("\n");

    for (int n = 0; n < index; n++) {
        if (n == 0)
            printf("%9d   ", n+1);
        else
            printf("%d   ", n+1);
    }

    printf("\n");

    return 0;
}


