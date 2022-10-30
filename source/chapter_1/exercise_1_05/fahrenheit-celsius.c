
#include <stdio.h>

/**
 * Exercise 1-05
 * Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 */

/**
 * Fahrenheit-Celsius table.
 */

int main (int argc, char *argv[])
{
    printf("Fahrenheit\tCelsius\n");
    printf("---------------------------\n");

    for (int fahr = 300; fahr >= 0; fahr-= 20)
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));

    return 0;
}


