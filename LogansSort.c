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

void kingSizedSorter(int a, int b, int c) {
    int biggestNumber;
    int middleNumber;
    int smallestNumber;

    if ((a < b) && (b < c)) {
        biggestNumber = c;
        middleNumber = b;
        smallestNumber = a;
    printf("Sorted from a to b to c: %d , %d , %d\n", a, b, c);
    }
    
    if ((c < b) && (b < a)) {
        biggestNumber = a;
        middleNumber = b;
        smallestNumber = c;
    printf("Sorted from c to b to a: %d , %d , %d\n", c, b, a);
    }
 
    if ((c < a) && (a < b)) {
        biggestNumber = b;
        middleNumber = a;
        smallestNumber = c;
    printf("Sorted from c to a to b: %d , %d , %d\n", c, a, b);
    }

    if ((a < c) && (c < b)) {
        biggestNumber = b;
        middleNumber = c;
        smallestNumber = a;
    printf("Sorted from a to c to b: %d , %d , %d\n", a, c, b);
    }

    if ((b < a) && (a < c)) {
        biggestNumber = c;
        middleNumber = a;
        smallestNumber = b;
    printf("Sorted from b to a to c: %d , %d , %d\n", b, a, c);
    }

    if ((b < c) && (c < a)) {
        biggestNumber = a;
        middleNumber = c;
        smallestNumber = b;
    printf("Sorted from b to c to a: %d , %d , %d\n", b, c, a);
    }
}

int main(int argc, char** argv) {
    int unsortedArray[4];
    
    int i;
    for (i = 1; i < argc; i++) {
        printf("argument %d is %s\n, i, argv[i]);
        unsortedArray[i] = atoi(argv[i]);

    }
    kingSizedSorter(unsortedArray[1], unsortedArray[2], unsortedArray[3]);
    return 0;
}
