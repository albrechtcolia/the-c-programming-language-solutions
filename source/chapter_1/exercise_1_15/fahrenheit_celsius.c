
#include <stdio.h>

/**
 * Exercise 1-15
 * Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 */

float fahrenheit_celsius (int fahrenheit);

int main (int argc, char *argv[])
{
    int fahr;
    int lower, upper, step;

    lower = 0;      // Lower limit.
    upper = 300;    // Upper limit.
    step  = 20;     // Step size.

    printf("Fahrenheit\tCelsius\n");
    printf("---------------------------\n");

    for (fahr = lower; fahr <= upper; fahr += step)
        printf("%3d\t\t%6.2f\n", fahr, fahrenheit_celsius(fahr));

    return 0;
}

float fahrenheit_celsius (int fahrenheit) {
    float celsius;
    celsius = ((5.0 / 9.0) * (fahrenheit - 32));

    return(celsius);
}


