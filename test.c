#include <stdio.h>
#include <stdlib.h>

int test() {
	int i;
	int sum;
	int remainder;
	int x;
	
	for (i = 1; i <= 100; i++) {
		
		x = i;	
	
		if ((x - 60) > 0) {
			x = x - 60;
		}
		
		if ((x - 30) > 0) {
			x = x - 30;
        }
			
		remainder = x % 10;
		sum = x / 10;
		sum = sum + remainder;
	
        int isDivisibleByThree = ((sum == 3 ) || (sum == 6) || (sum == 9));
        int isDivisibleByFive = ((x % 10 == 5) || (x % 10 == 0));
        
		if (isDivisibleByThree) {
			printf("Fizz\n");
		}
		
		if (isDivisibleByFive) {
			printf("Buzz\n");	
			
		}
		
		if ((isDivisibleByThree) && (isDivisibleByFive)) {
			printf("FizzBuzz\n");
		}
		
		if ((isDivisibleByThree == 0) && (isDivisibleByFive == 0)) {
			printf("%d\n",i);
		}
	}	
}

main() {
	test();
}