/* Even Fibonacci numbers
   ----------------------
   By considering the terms in the Fibonacci sequence whose values do not exceed 
   four million, find the sum of the even-valued terms.    
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int sum = 0, a = 1, b = 2;
	
	while (a <= 4000000 || b <= 4000000) {
		if (!(a & 1)) sum += a;
		if (!(b & 1)) sum += b;
		
		a += b;
		b += a;
	}
	
	printf("%u\n", sum);
	
	return 0;
}