#include <stdio.h>

void sort(int a, int b, int c) {
	int big;
	int mid;
	int small;
	
	if ((a < b) && (b < c)) {
		big = c;
		mid = b;
		small = a;
	} else if ((b < a) && (a < c)) {
		big = c;
		mid = a;
		small = b;
	} else if ((a < c) && (c < b)) {
		big = b;
		mid = c;
		small = a;
	} else if ((b < c) && (c < a)) {
		big = a;
		mid = c;
		small = b;
	} else if ((c < b) && (b < a)) {
		big = a;
		mid = b;
		small = c;
	} else if ((c < a) && (a < b)) {
		big = b;
		mid = a;
		small = c;
	} else if ((a == b) && (b < c)) {
		big = c;
		mid = b;
		small = a;
	} else if ((a == c) && (c < b)) {
		big = b;
		mid = c;
		small = a;
	} else if ((c == b) && (b < a)) {
		big = a;
		mid = b;
		small = c;
	} else if ((a == b) && (b > c)) {
		big = b;
		mid = a;
		small = c;
	} else if ((a == c) && (c > b)) {
		big = c;
		mid = a;
		small = b;
	} else if ((b == c) && (c > a)) {
		big = c;
		mid = b;
		small = a;
	} else if ((b == c) && (a == b)) {
		big = a;
		small =b;
		mid = c;
	} else {
		big = 0;
		mid = 0;
		small = 0;
	}
	
	printf("the numbers are %d %d %d\n", small, mid, big);
}