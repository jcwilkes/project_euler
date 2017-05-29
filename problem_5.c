#include <stdio.h>

#define SIZE 100

int main(int argc, char *argv[])
{
    int factors[SIZE], smallest_multiple = 1, ndx, curr;
    
    // Set the initial list of factors
    for (ndx = 0; ndx < SIZE; ndx++) {
        factors[ndx] = ndx + 1;
    }
    
    // For each factor, multiply into multiple and divide all other factors
    for (curr = 0; curr < SIZE; curr++) {
        smallest_multiple *= factors[curr];

        for (ndx = curr + 1; ndx < SIZE; ndx++) {
            if (factors[ndx] % factors[curr] == 0) {
                factors[ndx] /= factors[curr];
            }
        }
    }

    fprintf(stdout, "The smallest multiple of all integers at most %d is %d\n", SIZE, smallest_multiple);
    fprintf(stdout, "with factors: ");
    for (ndx = 0; ndx < SIZE - 1; ndx++) {
        if (factors[ndx] != 1) fprintf(stdout, "%d ", factors[ndx]);
    }
    if (factors[SIZE-1] != 1) fprintf(stdout, "%d\n", factors[SIZE-1]);
    else fprintf(stdout, "\n");

    return 0;
}