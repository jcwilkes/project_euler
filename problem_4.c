#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(int num)
{
    char str[10]; memset(str, '\0', 10);

    snprintf(str, 10, "%d", num);
    
    int i = 0;
    int j = strnlen(str, 10) - 1;
    while (i <= j) {
        if (str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    // Test suite
    #ifdef DEBUG_MODE
    fprintf(stdout, "%5d is %sa palindrome\n", 1, is_palindrome(1) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 11, is_palindrome(11) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 101, is_palindrome(101) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 1001, is_palindrome(1001) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 1021, is_palindrome(1021) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 1341, is_palindrome(1341) ? "" : "not ");
    fprintf(stdout, "%5d is %sa palindrome\n", 12, is_palindrome(12) ? "" : "not ");
    #endif

    int i,j, product, max = 0;
    for (i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {
            product = i*j;
            if (is_palindrome(product) && product > max) {
                max = product;
            }
        }
    }
    fprintf(stdout, "%d\n", max);

    return 0;
}