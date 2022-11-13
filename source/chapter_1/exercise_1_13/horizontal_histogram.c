
#include <stdio.h>

/**
 * Exercise 1-13
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation
 * is more challenging.
 */

#define MAX_WORDS 10  

int main (int argc, char *argv[])
{
    int c, prev, index;
    int wl[MAX_WORDS];

    for (int i = 0; i < MAX_WORDS; i++)
        wl[i] = 0;

    prev = index = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (prev != ' ' && prev != '\t' && prev != '\n')
                index++;
        }
        else
            wl[index]++;

        prev = c;
    }

    for (int i = 0; i < index; i++) {
        printf("| %2d | ", i+1);

        for (int j = 0; j < wl[i]; j++)
            printf("*");
        
        printf("\n");
    }

    return 0;
}


