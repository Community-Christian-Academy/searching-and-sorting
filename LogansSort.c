#include <stdio.h>

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
    int BiggestNumber;
    int MiddleNumber;
    int SmallestNumber;

    if ((a < b) && (b < c)) {
        BiggestNumber = c;
        MiddleNumber = b;
        SmallestNumber = a;
    printf("Sorted from a to b to c: %d , %d , %d\n", a, b, c);
    }
    
    if ((c < b) && (b < a)) {
        BiggestNumber = a;
        MiddleNumber = b;
        SmallestNumber = c;
    printf("Sorted from c to b to a: %d , %d , %d\n", c, b, a);
    }
 
    if ((c < a) && (a < b)) {
        BiggestNumber = b;
        MiddleNumber = a;
        SmallestNumber = c;
    printf("Sorted from c to a to b: %d , %d , %d\n", c, a, b);
    }

    if ((a < c) && (c < b)) {
        BiggestNumber = b;
        MiddleNumber = c;
        SmallestNumber = a;
    printf("Sorted from a to c to b: %d , %d , %d\n", a, c, b);
    }

    if ((b < a) && (a < c)) {
        BiggestNumber = c;
        MiddleNumber = a;
        SmallestNumber = b;
    printf("Sorted from b to a to c: %d , %d , %d\n", b, a, c);
    }

    if ((b < c) && (c < a)) {
        BiggestNumber = a;
        MiddleNumber = c;
        SmallestNumber = b;
    printf("Sorted from b to c to a: %d , %d , %d\n", b, c, a);
    }
}

int main() {
    sort(12);
    anotherSorter(238476,245);
    kingSizedSorter(1,1,1);
}
