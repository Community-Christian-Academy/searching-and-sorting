#include <stdio.h>
#include <stdlib.h>

int test() {
	int i;
	int sum;
	int remainder;
	int x;
	
	for (i = 1; i <= 100; i++) {
		
		x = i;	
	
		if (x - 30 > 0) {
			x = x - 30;
			}
			
			
			
			
		remainder = x % 10;
		sum = x / 10;
		sum = sum + remainder;
	
		if ((sum == 3 ) || (sum == 6) || (sum == 9)) {
			printf("Fizz\n");
		}
		
		if ((x % 10 == 5) || (x % 10 == 0)) {
			printf("Buzz\n");	
			
		}
		
		if (((sum == 3) || (sum == 6) || (sum == 9)) && ((x % 10 == 5) || (x % 10 == 0))) {
			
			printf("FizzBuzz\n");
		}
		
		if ((sum != 3) && (sum != 6) && (sum != 9) && (x % 10 != 5) && (x % 10 != 0)) {
			printf("%d\n",i);
		}
	}	
}


/*int numbers() {
	int i;
	for (i = 1; i <= 100; i++) {
	//	printf("%d\n",i);
		//if (i == 3) {
			//printf ("Fizz\n");
	
		//} 
		//if (i == 5) {
			//printf ("Buzz\n");
		//} 
		//if (i != 3 && i != 5) {
			//printf ("%d\n",i);
		//}
		
		test (i);
	}
}	
*/
main() {
	test();
}