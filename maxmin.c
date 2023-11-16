// This program shows the maximum and minimum value of different data types

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Maximum and Minimum values for different data types:\n\n");

    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);

    return 0;
}
