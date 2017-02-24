/* Largest prime factor
   ----------------------
   The prime factors of 13195 are 5, 7, 13 and 29.
   
   What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	long long unsigned num = 600851475143L, factor = 1L;
	
	while (num != 1L) {
		factor += 1L;
		while (num % factor == 0L) {
			num = num / factor;
		}
	}
	
	printf("%lu\n", factor);
	
	return 0;
}