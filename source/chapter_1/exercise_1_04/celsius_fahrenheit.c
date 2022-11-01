
#include <stdio.h>

/**
 * Exercise 1-04
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

/**
 * Celsius-Fahrenheit table.
 * Floating point version.
 */

int main (int argc, char *argv[])
{
    float celsius, fahr;
    int   lower, upper, step;

    lower = 0;      // Lower limit.
    upper = 300;    // Upper limit.
    step  = 20;     // Step size.

    printf("Celsius\t\tFahrenheit\n");
    printf("---------------------------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f\t\t%6.2f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}


