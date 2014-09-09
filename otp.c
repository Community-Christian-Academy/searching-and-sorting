#include <stdio.h>

void biggerSorter (int a, int b, int c){

	int big;
	int small;
	int medium;
	
	if ((a > b) && (b > c)){
		big = a;
		medium = b;
		small = c;
	
	} else if ((b > a) && (a > c)){
		big = b;
		medium = a;
		small = c;	
	
	} else if ((c > b) && (b > a)){
			big = c;
			medium = b;
			small = a;	
	
	} else if ((a > c) && (c > b)){
		big = a;
		medium = c;
		small = b;
	
	} else if (( b > c) && (c > a)){
		big = b;
		medium = c;
		small = a;
	
	} else if ((c > a) && (a > b)){
		big = c;
		medium = a;
		small = b;
	
	} else if ((a == b) && (b == c)){
		big = a;
		medium = b;
		small = c;
	
	} else if ((a == b) && (b > c)){
		big = a; 
		medium = b;
		small = c;
	
	} else if ((a == c) && (c > b)){
		big = a;
		medium = c;
		small= b;
	
	} else if ((b == c) && (c > a)){
		big = b;
		medium = c;
		small = a;
	
	} else if ((a == c) && (b > a)){
		big = b;
		medium = c;
		small = a;
	
	} else if ((b == c) && (a > b)){
		big = a;
		medium =c;
		small =b;
	
	} else if ((a == b) && (c > b)){
		big = c;
		medium = a;
		small = b;
	}
		printf("quashed to %d %d %d\n", small, medium, big);
} 
	int main() {
	biggerSorter(2, 2, 1);
}