#include <stdio.h>


int main(int argc, char *argv[])
{
    int n = 100;
    fprintf(stdout, "%d\n", (n*(n+1)*(3*n+2)*(n-1))/12);

    return 0;
}