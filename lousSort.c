#include <stdio.h>
#include <stdlib.h>

void sort(int x) {
    printf("sorted to:  %d\n", x);
}

void sortTwoNumbers(int x, int y) {
    if (x < y) {
        printf("already in order as %d %d\n", x, y);
    } else {
        printf("numbers were out of order.  sorted to %d %d\n", y, x);
    }
}

void otherSorter(int a, int b) {
    int biggestNumber;
    int smallestNumber;
    
    if (a < b) {
        biggestNumber = b;
        smallestNumber = a;
    } else {
        biggestNumber = a;
        smallestNumber = b;
    }
    printf("sorted to %d %d\n", smallestNumber, biggestNumber);
}

void anotherSorter(int x, int y) {
    printf("sorted to %d %d\n", x < y ? x : y, x < y ? y : x);
}

void biggerSorter (int a, int b, int c) {
    int bigNumber = a;
    int middleNumber = b;
    int smallNumber = c;
    
    if ((a < b) && (b < c)) {
        bigNumber = a;
        middleNumber = b;
        smallNumber = c;
    } if ((c < b) && ( b < a)) {
        bigNumber = c;
        middleNumber = b;
        smallNumber = a;
    } if ((a < c) && (c < b)) {
        bigNumber = a;
        middleNumber = c;
        smallNumber = b;
    } if ((c < a) && (a < b)) {
        bigNumber = c;
        middleNumber = a;
        smallNumber = b;
    } if ((b < a) && (a < c)) {
        bigNumber = b;
        middleNumber = a;
        smallNumber = c;
    } if ((b < c) && (c < a) ) {
        bigNumber = b;
        middleNumber = c;
        smallNumber = a;
    }
    printf("sorted to %d %d %d\n", smallNumber, middleNumber, bigNumber);
}


int main(int argc, char** argv) {
    int unsortedArray[4];
    
    for (int i = 1; i < argc; i++) {
        unsortedArray[i] = atoi(argv[i]);
        
    }
    
    biggerSorter(unsortedArray[1], unsortedArray[2], unsortedArray[3]);
    return 0;
}



