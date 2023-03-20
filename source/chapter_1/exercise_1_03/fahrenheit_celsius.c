
#include <stdio.h>

/**
 * Exercise 1-03
 * Modify the temperature conversion program to print a heading above the table.
 */

/**
 * Fahrenheit-Celsius table.
 * Floating point version.
 */

int main (int argc, char *argv[])
{
    float fahr, celsius;
    int   lower, upper, step;

    lower = 0;      // Lower limit.
    upper = 300;    // Upper limit.
    step  = 20;     // Step size.

    printf("Fahrenheit\tCelsius\n");
    printf("---------------------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.2f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}


