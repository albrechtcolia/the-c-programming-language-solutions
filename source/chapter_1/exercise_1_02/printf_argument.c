#include <stdio.h>

/**
 * Exercise 1-02
 * Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 */

int main (int argc, char *argv[])
{ 
    printf("alert:                         '\a'\n");
    printf("backspace:                     'backspace\b'\n");
    printf("formfeed:                      'formfeed\f'\n");
    printf("carriage return:               '\r'\n");
    printf("horizontal tab:                'horizontal\ttab'\n");
    printf("vertical tab:                  'vertical\vtab'\n");
    printf("backslash:                     '\\'\n");
    printf("single quotation mark:         '\''\n");
    printf("double quotation mark:         '\\'\n");
    printf("question mark:                 '\?'\n");

    return 0;
}