
#include <stdio.h>
#include <stdlib.h>

/**
 * Exercise 1-13
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */

/**
 * Horizontal version.
 */

#define MAX_WORDS 10

int main (int argc, char *argv[])
{
    char c, prev = ' ';
    int  wl[MAX_WORDS];
    int  index = 0;

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

    printf("\nHorizontal histogram\n");
    printf("---------------------------------\n");

    for (int i = 0; i < index; i++) {
        printf("| %2d | ", i+1);

        for (int j = 0; j < wl[i]; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}


